#include "pch.h"
#include "FileSystemMetadataProvider.h"
#include "Error.h"
#include "Factory.h"
#include "FileEnumerator.h"
#include "FileSystemAccessor.h"

using namespace ProfitRobots::NetCoreIndicore;
using namespace System::Runtime::InteropServices;

FileSystemAccessor::FileSystemAccessor()
{
	_native = new indicore3::FileSystemAccessor();
}

FileSystemAccessor::~FileSystemAccessor()
{
	_native->release();
}

bool FileSystemAccessor::Init(
	System::String^ base_path, 
	IFileSystemMetadataProvider^ metadata, 
	IError^% error)
{
	auto basePath = Marshal::StringToHGlobalAnsi(base_path);
	indicore3::IError* indiError = nullptr;
	auto result = _native->init((char*)(void*)basePath, metadata->GetNative(), &indiError);
	Marshal::FreeHGlobal(basePath);

	error = Create(indiError);

	return result;
}

IFileEnumerator^ FileSystemAccessor::Enumerator(bool recursive, IError^% error)
{
    indicore3::IError* nativeErrors = nullptr;
    auto nativeEnumerator = _native->enumerator(recursive, &nativeErrors);
    error = Create(nativeErrors);

    return gcnew FileEnumerator(nativeEnumerator);
}

IFileEnumerator^ FileSystemAccessor::Enumerator(array<System::String^>^ mask, bool recursive, IError^% error)
{
    array<System::IntPtr>^ ptrs = gcnew array<System::IntPtr>(mask->Length);
    const char** masks = new const char*[mask->Length + 1];
    for (size_t i = 0; i < mask->Length; i++)
    {
        ptrs[i] = Marshal::StringToHGlobalAnsi(mask[i]);
        masks[i] = (char*)(void*)ptrs[i];
    }

    indicore3::IError* nativeErrors = nullptr;
    auto nativeEnumerator = _native->enumerator(masks, recursive, &nativeErrors);
    error = Create(nativeErrors);

    delete[] masks;
    for (size_t i = 0; i < mask->Length; ++i)
    {
        Marshal::FreeHGlobal(ptrs[i]);
    }

    return gcnew FileEnumerator(nativeEnumerator);
}
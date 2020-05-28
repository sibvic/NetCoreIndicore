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
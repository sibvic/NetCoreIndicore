#include "pch.h"
#include "basicImpl/FileSource.h"

using namespace ProfitRobots::NetCoreIndicore;
using namespace System::Runtime::InteropServices;

bool FileSystemAccessor::Init(
	System::String^ base_path, 
	IFileSystemMetadataProvider^ metadata, 
	IError^% error)
{
	auto basePath = Marshal::StringToHGlobalAnsi(base_path);
	auto result = _native->init((char*)(void*)basePath, metadata->GetNative(), nullptr);
	Marshal::FreeHGlobal(basePath);
	return result;
}
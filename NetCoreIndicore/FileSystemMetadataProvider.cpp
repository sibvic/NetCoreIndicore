#include "pch.h"
#include "FileSystemMetadataProvider.h"

using namespace ProfitRobots::NetCoreIndicore;

FileSystemMetadataProvider::FileSystemMetadataProvider(Language implementation, ObjectType fileType)
{
    _native = new indicore3::FileSystemMetadataProvider((indicore3::ILanguageService::Language)implementation, (indicore3::ILanguageService::ObjectType)fileType);
}

FileSystemMetadataProvider::~FileSystemMetadataProvider()
{
    _native->release();
}

indicore3::IFileSystemMetadataProvider* FileSystemMetadataProvider::GetNative()
{
    return _native;
}
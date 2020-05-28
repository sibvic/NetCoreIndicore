//TODO: convert
#pragma once

#include <Error.h>
//
//namespace indicore3
//{
//
//
//class FileSystemDefaultPermissionProvider : public TAddRefImpl<IPermissions>
//{
// protected:
//    ~FileSystemDefaultPermissionProvider();
// public:
//    FileSystemDefaultPermissionProvider();
//    bool checkPermission(Permission permission, const char *param);
//    DECLARE_ID_MAP()
//};
//
//class INDICORE FileSystemMetadataProvider : public TAddRefImpl<IFileSystemMetadataProvider>
//{
// private:
//    ILanguageService::Language mLanguage;
//    ILanguageService::ObjectType mFileType;
//    FileSystemDefaultPermissionProvider *mDefaultProvider;
// protected:
//    ~FileSystemMetadataProvider();
// public:
//    FileSystemMetadataProvider(ILanguageService::Language implementation, ILanguageService::ObjectType fileType);
//    virtual ILanguageService::Language expectedLanguage();
//    virtual ILanguageService::ObjectType expectedType();
//    virtual IPermissions *permissions(const char *id);
//    DECLARE_ID_MAP();
//};

namespace ProfitRobots 
{
	namespace NetCoreIndicore 
	{
		public interface class IFileSystemMetadataProvider// : public IObject
		{
			virtual indicore3::IFileSystemMetadataProvider* GetNative() = 0;
		//    virtual ILanguageService::Language expectedLanguage() = 0;
		//    virtual ILanguageService::ObjectType expectedType() = 0;
		//    virtual IPermissions *permissions(const char *id) = 0;
		};
	}
}

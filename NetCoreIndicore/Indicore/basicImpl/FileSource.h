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

		public ref class FileSystemAccessor
		{
			indicore3::FileSystemAccessor* _native;
		public:
			FileSystemAccessor();
			~FileSystemAccessor();
			bool Init(System::String^ base_path, IFileSystemMetadataProvider^ metadata, IError^% error);
			//virtual bool resolvePath(const char *baseid, const char *secondid, char *resolved, int maxResolved);
			//virtual bool location(const char *id, char *location, int maxLocation);
			///** Gets enumeration of the files. */
			//virtual IFileEnumerator *enumerator(bool recursive, IError **pperror);
			//virtual IFileEnumerator *enumerator(const char **mask, bool recursive, IError **pperror);
			//virtual IFileEnumerator *enumerator(const char *folder, const char **mask, bool recursive, IError **pperror);
			///** Checks whether the object with the ID specified exists. */
			//virtual bool exists(const char *id, IError **pperror);
			///** Checks whether opening of the object with the id and mode specified possible. */
			//virtual bool isSupported(const char *id, IFileAccessor::OpenMode omode, IFileAccessor::AccessMode amode);
			///** Opens the object with the mode specified. */
			//virtual IFile *open(const char *id, IFileAccessor::OpenMode omode, IFileAccessor::AccessMode amode, IFileAccessor::DataMode dmode, IError **pperror);
		};
	}
}

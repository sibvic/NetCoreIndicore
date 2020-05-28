#pragma once

namespace ProfitRobots 
{
	namespace NetCoreIndicore 
	{
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
			virtual IFileEnumerator^ Enumerator(bool recursive, IError^% error);
			virtual IFileEnumerator^ Enumerator(array<System::String^>^ mask, bool recursive, IError^% error);
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
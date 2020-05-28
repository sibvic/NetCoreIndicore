//TODO: convert
#pragma once
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
		public interface class IError// : public IObject
		{
		public:
		//    /** the stage when the error is occured. */
		//    enum ErrorStage
		//    {
		//        /** Diagnostic. */
		//        Diagnostic,
		//        /** Internal logic error. */
		//        Internal,
		//        /** I/O error. */
		//        IO,
		//        /** Indicator or strategy initialization. */
		//        Initialization,
		//        /** Indicator or strategy code execution. */
		//        Execution,
		//        /** External errors. */
		//        External = 1000,
		//    };
		//
		//    /** The indicore code of the error. */
		//    enum ErrorCode
		//    {
		//        //Diagnostic Errors
		//        DiagnosticError0,
		//        DiagnosticError1,
		//        DiagnosticError2,
		//        DiagnosticError3,
		//        //Internal errors
		//        CantAllocateMemory,
		//        ObjectInImproperState,
		//        //I/O errors
		//        IOObjectDoesNotExist,
		//        IOObjectIsNotDirectory,
		//        IOObjectIsNotFile,
		//        IOCantOpenFile,
		//        IOCantHandleFile,
		//        IOCantRecognizeFile,
		//        LanguageNotFound,
		//        //Parameters error
		//        ParamIdIsNull,
		//        ParamAlreadyExists,
		//        ParamDoesNotExist,
		//        ParamAltAlreadyExists,
		//        //Lua Errors
		//        LuaCompilation,
		//        FFIInitialization,
		//        LuaExecution,
		//        LuaNoInit,
		//        LuaNoPrepare,
		//        LuaNoUpdate,
		//        //Js Errors
		//        JsCompilation,
		//        JsExecution,
		//        JsNoInit,
		//        JsNoPrepare,
		//        JsNoUpdate,
		//        JsNotSupported,
		//        //Python Errors
		//        PythonCompilation,
		//        PythonExecution,
		//        PythonNoInit,
		//        PythonNoPrepare,
		//        PythonNoUpdate,
		//        PythonNotSupported,
		//        //
		//        HostExecuteError,
		//        //
		//        FeatureNotSupported,
		//        InvalidValue,
		//        LanguageNotLoaded,
		//        //External codes
		//        ExternalCode = 10000,
		//    };
		//
		//
		//    /** Information about a single error. */
		//    class INDICORE IErrorInfo : public IObject
		//    {
		//     protected:
		//        IErrorInfo();
		//     public:
		//        /** Returns stage when error happened. */
		//        virtual ErrorStage getStage() const = 0;
		//        /** Returns error code. */
		//        virtual ErrorCode getCode() const = 0;
		//        /** Returns default error message. */
		//        virtual const char *getText() const = 0;
		//        /** Returns file related to the error (if known). */
		//        virtual const char *getFile() const = 0;
		//        /** Returns the line number of in file related to the error (if known). The first line has index 1. */
		//        virtual int getLine() const = 0;
		//        /** Returns the position in the line of in file related to the error (if known). The first character in the line has index 1. */
		//        virtual int getColumn() const = 0;
		//
		//        static const GUID ID;
		//    };
		//
		//    /** Gets number of errors. */
		//    virtual index_t size() const = 0;
		//    /** Gets error information by the index.
		//
		//        Error information shall be released after the use. */
		//    virtual const IErrorInfo *getError(index_t index) const = 0;
		};

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

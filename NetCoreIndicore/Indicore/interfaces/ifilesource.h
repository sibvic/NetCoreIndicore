//TODO: convert
//#pragma once
//
//namespace indicore3
//{
//class IError;
//
//class INDICORE IPermissions : public IObject
//{
// protected:
//    IPermissions();
// public:
//    enum Permission
//    {
//        FFIAllowed,                 //enables or disables FFI access for LuaJIT
//        OSCriticalAccessAllowed,    //enables or disables critical OS functions (such as registry modification outside of the sandbox keys)
//        DLLLoadAllowed,             //enables or disables loading of a certain dll, param == dll name
//        FileAccessAllowed,          //enables or disables access to a files in file system for a certain file, param == file name
//        LuaInteropAllowed,          //enables or disable Lua interop services
//        FileReadAllowed,            //enables or disables read from files in file system for a certain file, param == file name
//        FileWriteAllowed,           //enables or disables write to files in file system for a certain file, param == file name
//        RegistryReadAllowed,        //enables or disables registry read, except allow SandBox, param == registry key
//        RegistryWriteAllowed,       //enables or disables registry write,, except allow SandBox, param == registry key
//        OSExecuteAllowed,           //enables or disables execute commands by an operating system shell
//        TradingTableReadAllowed,    //enables or disables read data from trading Table
//        TradingAllowed,             //enables or disables ability of the code to trade
//        HttpAccessAllowed,          //enables or disables access to a resource in the network , param == url
//        LanguageAllowed,            //enables or disables loading the language by its name: lua, js, ...
//        PythonImportAllowed,        //enables or disables loading the python module by its name
//        PythonSysAllowed,           //enables or disables sys and importlib lock
//    };
//
//    virtual bool checkPermission(Permission permission, const char *param = 0) = 0;
//    static const GUID ID;
//};
//
//class INDICORE IFileMetadata : public IObject
//{
// protected:
//    IFileMetadata();
// public:
//    virtual ILanguageService::ObjectType fileType() = 0;
//    virtual ILanguageService::Language fileLanguage() = 0;
//    virtual bool isPublic() = 0;
//    virtual IPermissions *permissions() = 0;
//    static const GUID ID;
//};
//
///** enumerator of the existing objects in the file accessor .*/
//class INDICORE IFileEnumerator : public IObject
//{
// protected:
//    IFileEnumerator();
// public:
//    /** resets enumerator. */
//    virtual void reset(IError **pperror) = 0;
//    /** gets next file. */
//    virtual bool nextFile(IError **pperror) = 0;
//    /** checks whether the current file exists. */
//    virtual bool hasFile(IError **pperror) = 0;
//    /** gets identifier of the file. */
//    virtual const char *fileId() = 0;
//    /** gets only name of the file. */
//    virtual const char *nameWithoutExtension() = 0;
//    /** gets size of the file. */
//    virtual int fileSize() = 0;
//    /**get file metadata. */
//    virtual IFileMetadata *getMetadata() = 0;
//
//    static const GUID ID;
//};
//
///** File handles. */
//class INDICORE IFile : public IObject
//{
// protected:
//    IFile();
// public:
//    enum Position
//    {
//        Begin,
//        End,
//        Current,
//    };
//
//    enum BufferingMode
//    {
//        FullBuffering,
//        LineBuffering,
//        NoBuffering
//    };
//
//    virtual const char *id() = 0;
//
//    virtual bool seek(long position, Position mode, IError **pperror) = 0;
//    virtual long position(IError **pperror) = 0;
//    virtual long size(IError **pperror) = 0;
//    virtual bool eof(IError **pperror) = 0;
//    virtual bool read(void *buffer, size_t readCount, size_t &actualCount, IError **pperror) = 0;
//    virtual bool readLine(char *buffer, size_t bufferSize, IError **pperror) = 0;
//    virtual bool readLineUnicode(wchar_t *buffer, size_t bufferSize, IError **pperror) = 0;
//    /** Reads double from the file. */
//    virtual bool readDouble(double &number, IError **pperror) = 0;
//    /**  Sets the buffering mode for an output file. There are three available modes:
//
//        For the last two cases, size specifies the size of the buffer, in bytes. The default is an appropriate size. 
//    */
//    virtual bool setvbuf(BufferingMode mode, int size, IError **pperror) = 0;
//    
//    virtual bool write(const void*buffer, size_t writeCount, IError **pperror) = 0;
//    virtual bool writeLine(const char *buffer, IError **pperror) = 0;
//    virtual bool writeLineUnicode(const wchar_t *buffer, IError **pperror) = 0;
//    virtual bool flush(IError **pperror) = 0;
//    static const GUID ID;
//};
//
//}
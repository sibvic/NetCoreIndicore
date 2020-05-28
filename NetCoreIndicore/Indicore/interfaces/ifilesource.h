//TODO: convert
//#pragma once
//
//namespace indicore3
//{
//class IError;
//
//
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
//TODO: convert
//#pragma once
//
//namespace indicore3
//{
//
///** The information about of stack of errors. */
//class INDICORE IError : public IObject
//{
// protected:
//    IError();
// public:
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
//
//    static const GUID ID;
//};
//
//}
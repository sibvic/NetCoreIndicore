//TODO: convert
//#pragma once
//
//namespace indicore3
//{
//
//class IError;
//class IFileAccessor;
//class IProfile;
//class ILanguage;
//class IPermissions;
//class IString;
//
//class INDICORE ILanguageService : public IObjectNoRef
//{
//  protected:
//    ILanguageService();
//    virtual ~ILanguageService();
//  public:
//    enum Language
//    {
//        UnknownLanguage = -1,
//        Lua,
//        Js,
//        NativeWin,
//        Python,
//        LanguageCount
//    };
//
//    enum ObjectType
//    {
//        UnknownType,
//        Indicator,
//        Strategy,
//        Tool,
//        Macro,
//    };
//
//    virtual bool recognizeFile(IFileAccessor *accessor, const char *id, Language &language, ObjectType &type, IError **pperror) = 0;
//    virtual ILanguage *getLanguage(Language language) = 0;
//    virtual bool languageIsAllowed(Language language) = 0;
//    static const GUID ID;
//};
//
//class INDICORE IDebuggerCallback : public IObjectNoRef
//{
// protected:
//    IDebuggerCallback();
//    virtual ~IDebuggerCallback();
// public:
//    virtual bool calculateWatch(const char *watch, IString *watchResultType, IString *watchResult, IError **error) = 0;
//    virtual bool prepareCallStack(bool depthOnly = false) = 0;
//    virtual index_t callStackDepth() = 0;
//    virtual bool getCallStackFrame(index_t frame, IString *type, IString *typeName, IString *file, int &line) = 0;
//    virtual bool prepareVarList(bool g = false) = 0;
//    virtual index_t varCount() = 0;
//    virtual const char *varName(index_t index) = 0;
//    static const GUID ID;
//};
//
//class INDICORE IDebugger : public IObjectNoRef
//{
// protected:
//    IDebugger();
//    virtual ~IDebugger();
// public:
//    /** checks whether a profile or instance(s) is being created need to be debugged
//
//        true - debug
//        false - don't debug
//      */
//    virtual bool objectCreated(IObjectNoRef *indicoreObject) = 0;
//    /** called when line is executed. when the method returns, the next command is executed
//        in the debugger if the method returns true, otherwise debugging is stopped. */
//    virtual bool lineExecuting(IObjectNoRef *indicoreObject, IDebuggerCallback *callback, const char *fileId, int line) = 0;
//
//    static const GUID ID;
//};
//
//class IIndicatorProfileImplementation;
//class IStrategyProfileImplementation;
//class IToolProfileImplementation;
//class IMacroProfileImplementation;
//class ITags;
//class IHost;
//
//class INDICORE ILoadMetadata : public IObject
//{
// protected:
//    ILoadMetadata();
// public:
//    virtual ITags *getPresetTags() = 0;
//    virtual IHost *getHost() = 0;
//    virtual const char *getLanguage() = 0;
//
//    static const GUID ID;
//};
//
//class INDICORE ILanguage : public IObjectNoRef
//{
// protected:
//    ILanguage();
// public:
//    ~ILanguage();
//
//    enum LanguageOption
//    {
//        LuaVm,
//        PythonImportPermissions, //used for __import__ function of python
//        PythonSandbox, //used for system calls
//
//    };
//
//    enum LuaVmOptionValue
//    {
//        LuaVmClassic = 0,
//        LuaVmJitInterpreter = 1,
//        LuaVmJitCompiler = 2,
//    };
//
//    virtual bool setOption(LanguageOption option, void *value, IError **pperror) = 0;
//    virtual bool canCompile(IProfile *profile) = 0;
//    virtual bool compile(IProfile *profile, IFileAccessor *accessor, const char *id, IError **pperror) = 0;
//    virtual bool checkSyntax(IPermissions *permissions, IFileAccessor *accessor, const char *name, const char *source, IError **pperror) = 0;
//    virtual bool recognizeFile(IFileAccessor *accessor, const char *id, ILanguageService::ObjectType &type, IError **pperror) = 0;
//    virtual bool setDebugger(IDebugger *debugger) = 0;
//
//    virtual IIndicatorProfileImplementation *createIndicatorProfile(IFileAccessor *accessor, const char *id, ILoadMetadata *loadMetadata, IError **pperror) = 0;
//    virtual IStrategyProfileImplementation *createStrategyProfile(IFileAccessor *accessor, const char *id, ILoadMetadata *loadMetadata, IError **pperror) = 0;
//#ifndef EXCLUDE_MACROS
//    virtual IToolProfileImplementation *createToolProfile(IFileAccessor *accessor, const char *id, ILoadMetadata *loadMetadata, IError **pperror) = 0;
//#endif
//#ifndef EXCLUDE_TOOLS
//    virtual IMacroProfileImplementation *createMacroProfile(IFileAccessor *accessor, const char *id, ILoadMetadata *loadMetadata, IError **pperror) = 0;
//#endif
//    virtual void release() = 0;
//
//    static const GUID ID;
//};
//
//typedef IIndicatorProfileImplementation* (*CustomIndicatorFactory)(ILoadMetadata *loadMetadata);
//typedef IStrategyProfileImplementation* (*CustomStrategyFactory)(ILoadMetadata *loadMetadata);
//typedef IToolProfileImplementation* (*CustomToolFactory)(ILoadMetadata *loadMetadata);
//typedef IMacroProfileImplementation* (*CustomMacrosFactory)(ILoadMetadata *loadMetadata);
//
//}
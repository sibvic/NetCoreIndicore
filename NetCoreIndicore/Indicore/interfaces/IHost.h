//TODO: convert
//#pragma once
//
//namespace indicore3
//{
//
//class ITradingTable;
//class IProfile;
//
//class INDICORE ITerminal : public IObject
//{
// protected:
//    ITerminal();
// public:
//    /** Show the alert. */
//    virtual bool alertMessage(IInstance *instance, const char *instrument, double price, const char *signalname, double time, IError **error) = 0;
//
//    /** Play the sound. */
//    virtual bool alertSound(IInstance *instance, const char *file, bool recurrent, IError **error) = 0;
//
//    /** Send the email. */
//    virtual bool alertEmail(IInstance *instance, const char *to, const char *subject, const char *text, IError **error) = 0;
//
//    /** Execute order.
//
//        @param cookie       The cookie for the async operation notification
//        @param params       The value map with the order fields. The order fields corresponds
//                            to the fields of the 34 transport command.
//        @param error        [output] The pointer to the error in case it occurred.
//        @return             The request identifier or 0 in case error occurred.
//      */
//    virtual const char *executeOrder(IInstance *instance, int cookie, IValueMap *params, IError **error) = 0;
//    static const GUID ID;
//};
//
//class INDICORE IHostNowProvider : public IObjectNoRef
//{
// public:
//    /** Returns the current local date/time in local time zone in OLE Date format. */
//    virtual double now() = 0;
//    virtual double nowUtc() = 0;
//};
//
//class INDICORE IPathManager : public IObjectNoRef
//{
// public:
//    virtual const char *getAppPath() = 0;
//    virtual const char *getProfilePath(IProfile *profile) = 0;
//};
//
//
//class INDICORE IHostVmSettingsCallback : public IObjectNoRef
//{
// public:
//    virtual void createGlobalConstant(const char *name, const IParameterConstant *value) = 0;
//    virtual void createCoreConstant(const char *name, const IParameterConstant *value) = 0;
//    virtual void setNowProvider(IHostNowProvider *provider) = 0;
//    virtual void setPathManager(IPathManager *pm) = 0;
//};
//
//
//class INDICORE IHost : public IExecutable
//{
// protected:
//    IHost();
// public:
//    virtual void trace(IObjectNoRef *caller, const char *trace) = 0;
//    virtual void tracef(IObjectNoRef *caller, const char *fmtString, ...);
//    virtual const char *name() = 0;
//    virtual const char *version() = 0;
//    virtual ITradingTable *getTradingTable(const char *name, IError **error) = 0;
//    virtual ITerminal *getTerminal(IError **error) = 0;
//
//    enum VmType
//    {
//        Unknown,
//        Profile,
//        Instance,
//    };
//    virtual void setupVm(ILanguageService::Language language, ILanguageService::ObjectType object, IHostVmSettingsCallback *callback, IHost::VmType type, void *vm) = 0;
//    virtual void releaseCaller(IObjectNoRef *instance) = 0;
//    static const GUID ID;
//};
//
//}
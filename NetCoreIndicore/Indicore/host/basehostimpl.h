//TODO: convert
//#pragma once
//
//namespace indicore3
//{
//
//class InstanceObjectCollection;
//class BaseHostImplVt;
//
///** The basic implementation of the host. */
//class INDICORE BaseHostImpl : public TAddRefImpl<IHost>
//{
//    friend class BaseHostImplVt;
// private:
//    std::map<IObjectNoRef *, InstanceObjectCollection *> *mObjects;
//    std::string mTemp;
//    BaseHostImplVt *mMethodsTable;
// public:
//    BaseHostImpl();
//    virtual ~BaseHostImpl();
//
//    virtual const char *name();
//    virtual const char *version();
//    virtual void trace(IObjectNoRef* caller, const char *str);
//    virtual bool findMember(const char *memberName, int *index, IExecutable::MemberType *type);
//    virtual void invoke(int member, IExecutable::InvokeType type, IObjectNoRef *caller, IExecutableArgs *arguments);
//
//    /** Call when an indicator instance is removed. */
//    void releaseCaller(IObjectNoRef *instance);
//
//    /** Get an instance-related objects. */
//    InstanceObjectCollection *getObjects(IObjectNoRef *caller);
//    virtual bool getHistory(IInstance *instance, int cookie, const char *instrument, const char *period, double from, double to, bool bid, IPriceStream **, IError **error);
//    virtual bool extendHistory(IInstance *instance, int cookie, IPriceStream *source, double from, double to, IError **error);
//    virtual bool getSyncHistory(IIndicatorInstance *instance, const char *instrument, const char *period, bool bid, int barsAtLeft, int asyncCommandId1, int asyncCommandId2, IPriceStream **, IError **error);
//    virtual bool getTradingDayOffset(int &offset, IError **error);
//    virtual bool getTradingWeekOffset(int &offset, IError **error);
//    virtual bool getAskPrice(IInstance *instance, IPriceStream **, IError **error);
//    virtual bool getBidPrice(IInstance *instance, IPriceStream **, IError **error);
//    virtual bool convertTime(int from, int to, double date, double &res, IError **error);
//    virtual bool getTradingProperty(const char *name, const char *instrument, const char *account, ParameterValue **value, IError **error);
//    virtual bool attachTextToChart(IIndicatorInstance *instance, const char *streamid,  IError **error);
//    virtual bool attachOutputToChart(IIndicatorInstance *instance, const char *streamid,  IError **error);
//    virtual bool getProperty(const char *, ParameterValue **value, IError **error);
//    virtual bool addCommand(IInstance *instance, int cookie, const char *text, const char *comment, IError **error);
//    virtual bool getServerTime(double &value, IError **error);
//    virtual bool killTimer(IInstance *instance, int timerId, IError **error);
//    virtual bool prompt(IInstance *instance, int cookie, const char *title, const char *label, IParameters *parameters, IError **error);
//    virtual bool isTableFilled(IInstance *instance, const char *table, bool &value, IError **error);
//    virtual bool setStatus(IIndicatorInstance *instance, const char *status, IError **error);
//    virtual bool setTimer(IInstance *instance, int cookie, int timeout, int &timerId, IError **error);
//    virtual bool stop(IStrategyInstance *instance, IError **error);
//    virtual bool subscribeTradingEvents(IInstance *instance, int cookie, const char *table, IError **error);
//    virtual ITradingTable *getTradingTable(const char *name, IError **error);
//    virtual void setupVm(ILanguageService::Language language, ILanguageService::ObjectType object, IHostVmSettingsCallback *settingsCallback, IHost::VmType type, void *vm);
//    virtual bool isArray();
//    virtual ITerminal *getTerminal(IError **error);
//    virtual bool unsubscribeTradingEvents(IInstance *instance, const char *table, IError **error);
//    virtual bool sendMessage(IInstance *instance, const char *userName, const char *subject, const char *text, IError **error);
//    virtual bool calculatePositionOfDate(IInstance *instance, IPriceStream *source, double date, int &index, IError **error);
//    virtual bool calculateDate(indicore3::IInstance *instance, indicore3::IPriceStream *source, int index, double &date, indicore3::IError **error);
//    virtual bool getHistory1(IInstance *instance, int cookie, const char *instrument, const char *period, int count, double to, bool bid, IPriceStream **, IError **error);
//    virtual bool getIndicatorOwner(IInstance *instance, int &res, IError **error);
//    virtual bool isReadyForTrade(IInstance *instance, bool &res, IError **error);
//    virtual bool createFont(const char *name, int size, bool italic, bool bold, void *&font);
//    virtual bool deleteFont(void *&font);
//    DECLARE_ID()
//    DECLARE_ID_MAP()
// private:
//    void impl_drawLine(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_removeLine(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_drawLabel(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_drawLabel1(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_removeLabel(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_removeAll(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_getSyncHistory(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_getHistory(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_extendHistory(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_getAskPrice(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_getBidPrice(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_getTradingDayOffset(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_getTradingWeekOffset(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_convertTime(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_getTradingProperty(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_attachTextToChart(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_attachOutputToChart(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_createFont(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_deleteFont(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_getProperty(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_addCommand(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_getServerTime(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_killTimer(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_prompt(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_isTableFilled(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_setStatus(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_setTimer(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_stop(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_subscribeTradingEvents(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_unsubscribeTradingEvents(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_sendMessage(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_calculatePositionOfDate(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_calculateDate(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_getIndicatorOwner(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_getHistory1(IObjectNoRef *caller, IExecutableArgs *arguments);
//    void impl_isReadyForTrade(IObjectNoRef *caller, IExecutableArgs *arguments);
//};
//
//}

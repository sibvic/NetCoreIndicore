//TODO: convert
//#pragma once
//
//namespace indicore3
//{
//
//class Domains;
//class LanguageService;
//class IndicatorProfiles;
//class StrategyProfiles;
//class ToolProfiles;
//#ifndef EXCLUDE_MACROS
//class MacrosProfiles;
//#endif
//
//const index_t ciMaxFixedPeriodLimits = 15000;
//
//class INDICORE IndicoreManager : public IObjectNoRef
//{
// public:
//    typedef enum
//    {
//        Standard,
//        Backtester
//    } EMode;
//
// private:
//    LanguageService *mLanguages;
//    IPermissions *mPermissions;
//    Domains *mDomains;
//    EMode mMode;
//    void getIndicatorProfiles(IDomain *domain, bool includePrivate, IndicatorProfiles *profiles);
//    void getStrategyProfiles(IDomain *domain, bool includePrivate, StrategyProfiles *profiles);
//    void getToolProfiles(IDomain *domain, bool includePrivate, ToolProfiles *profiles);
//#ifndef EXCLUDE_MACROS
//    void getMacrosProfiles(IDomain *domain, bool includePrivate, MacrosProfiles *profiles);
//#endif
// protected:
//    ~IndicoreManager();
//    IndicoreManager(IPermissions *permissions);
// public:
//    static IndicoreManager *createInstance(IPermissions *permissions = 0);
//    void release();
//
//    ILanguageService *getLanguageService();
//    IDomain *createDomain(const char *id, const char *name);
//    IDomains *getDomains();
//    bool loadIntoDomain(IDomain *domain, IFileAccessor *accessor, IFileEnumerator *enumerator, ILoadMetadata *metadata, IError **pperror);
//    bool removeProfile(IProfile *profile);
//
//    void setMode(EMode mode);
//    EMode getMode() const;
//
//    IIndicatorProfiles *getIndicatorProfiles(IDomain *currentDomain = 0);
//    IStrategyProfiles *getStrategyProfiles(IDomain *currentDomain = 0);
//    IToolProfiles *getToolProfiles(IDomain *currentDomain = 0);
//#ifndef EXLUDE_MACROS
//    IMacrosProfiles *getMacrosProfiles(IDomain *currentDomain = 0);
//#endif
//
//    IPermissions *getPermissions();
//
//    DECLARE_ID()
//    DECLARE_ID_MAP()
//};
//
//}
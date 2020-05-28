//TODO: convert
#pragma once
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
#include "Permissions.h"
namespace ProfitRobots
{
	namespace NetCoreIndicore
	{
        public enum class EMode
        {
            Standard,
            Backtester
        };

        public ref class IndicoreManager// : public IObjectNoRef
        {
            indicore3::IndicoreManager* _native;
            IndicoreManager(indicore3::IndicoreManager* native);
        public:
            ~IndicoreManager();

            static IndicoreManager^ Create(IPermissions^ permissions);
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
        //    IPermissions *getPermissions();
        };
    }
}

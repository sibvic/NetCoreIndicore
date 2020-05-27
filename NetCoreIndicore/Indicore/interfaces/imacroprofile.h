//TODO: convert
//#pragma once
//
//#include "iprofile.h"
//
//namespace indicore3
//{
//class IMacroInstance;
//
//class INDICORE IMacroProfile : public IProfile
//{
// protected:
//    IMacroProfile();
// public:
//    virtual IMacroInstance *createInstance(IHost *host) = 0;
//    virtual const char *getIcon() = 0;
//    virtual const char *getTooltip() = 0;
//    virtual IconStatus getIconStatus(IHost *host) = 0;
//
//    static const GUID ID;
//};
//
//class INDICORE IMacrosProfiles : public IObject
//{
// protected:
//    IMacrosProfiles();
// public:
//    virtual index_t size() = 0;
//    virtual IMacroProfile *getProfile(index_t index) = 0;
//    virtual IMacroProfile *getProfile(const char *id) = 0;
//
//    static const GUID ID;
//};
//
//class INDICORE IMacroProfileCallback : public IMacroProfile
//{
// protected:
//    IMacroProfileCallback();
// public:
//    virtual void setID(const char *id) = 0;
//    virtual void setName(const char *name) = 0;
//    virtual void setDescription(const char *description) = 0;
//    virtual IPermissions *getPermissions() = 0;
//    virtual void setIcon(const char *name) = 0;
//    virtual void setTooltip(const char *tooltip) = 0;
//
//    static const GUID ID;
//};
//
//class IMacroInstanceImplementation;
//
//class INDICORE IMacroProfileImplementation : public IObject
//{
// protected:
//    IMacroProfileImplementation();
// public:
//    virtual bool init(IMacroProfileCallback *profile, IError **pperror) = 0;
//    virtual ILanguageService::Language getLanguage() = 0;
//    virtual IMacroInstanceImplementation *getInstanceImplementation() = 0;
//    virtual IconStatus getIconStatus(IHost *host) = 0;
//
//    static const GUID ID;
//};
//}

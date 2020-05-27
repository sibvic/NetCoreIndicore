//TODO: convert
//#pragma once
//
//#include "iprofile.h"
//
//namespace indicore3
//{
//
//class INDICORE ICreationStrategy
//{
// protected:
//    ICreationStrategy();
//    virtual ~ICreationStrategy();
// public:
//    enum CreationPattern
//    {
//        Undefined = 0,
//        Click = 1,
//        DragClick = 2,
//        DoubleClick = 3,
//        DragClickOrClick = 4,
//    };
//    virtual CreationPattern getPattern() = 0;
//    virtual int getMaxClickCount() = 0;
//    virtual bool getNeedParamsAfterPattern() = 0;
//};
//
//class INDICORE ICreationStrategyCallback : public ICreationStrategy
//{
// protected:
//    ICreationStrategyCallback();
//    virtual ~ICreationStrategyCallback();
// public:
//    virtual void setPattern(CreationPattern pattern) = 0;
//    virtual void setMaxClickCount(int clickCount) = 0;
//    virtual void setNeedParamsAfterPattern(bool needParamsAfterPattern) = 0;
//};
//
//class IToolInstance;
//
//class INDICORE IToolProfile : public IProfile
//{
// protected:
//    IToolProfile();
// public:
//    virtual ICreationStrategy *getCreationStrategy() = 0;
//    virtual IToolInstance *createInstance(IHost *host, IParameters *params) = 0;
//    virtual const char *getIcon() = 0;
//    virtual IconStatus getIconStatus(IHost *host) = 0;
//
//    static const GUID ID;
//};
//
//class INDICORE IToolProfiles : public IObject
//{
// protected:
//    IToolProfiles();
// public:
//    virtual index_t size() = 0;
//    virtual IToolProfile *getProfile(index_t index) = 0;
//    virtual IToolProfile *getProfile(const char *id) = 0;
//
//    static const GUID ID;
//};
//
//class INDICORE IToolProfileCallback : public IToolProfile
//{
// protected:
//    IToolProfileCallback();
// public:
//    virtual void setID(const char *id) = 0;
//    virtual void setName(const char *name) = 0;
//    virtual void setDescription(const char *description) = 0;
//    virtual ICreationStrategyCallback *getCreationStrategyCallback() = 0;
//    virtual ParameterFactory *getParametersFactory() = 0;
//    virtual IPermissions *getPermissions() = 0;
//    virtual void setIcon(const char *name) = 0;
//    virtual IconStatus getIconStatus(IHost *host) = 0;
//
//    static const GUID ID;
//};
//
//class IToolInstanceImplementation;
//
//class INDICORE IToolProfileImplementation : public IObject
//{
// protected:
//    IToolProfileImplementation();
// public:
//    virtual bool init(IToolProfileCallback *profile, IError **pperror) = 0;
//    virtual ILanguageService::Language getLanguage() = 0;
//    virtual IToolInstanceImplementation *getInstanceImplementation() = 0;
//    virtual IconStatus getIconStatus(IHost *host) = 0;
//
//    static const GUID ID;
//};
//
//}

//TODO: convert
//#pragma once
//namespace indicore3
//{
//
//class ParameterFactory;
//class IParameters;
//class IError;
//class IFileAccessor;
//class IParameterConstant;
//
//
//enum INDICORE IconStatus //This is masks for bit operations! not order!
//{
//    IconDisabled = 0,
//    IconEnabled = 1,
//    IconChecked = 2,
//};
//
//class INDICORE ILocalizationFile : public IObject
//{
// protected:
//    ILocalizationFile();
// public:
//    virtual const char *getString(const char *id) const = 0;
//    virtual const char *getString(const char *locale, const char *id) const = 0;
//
//    virtual const char *getString(const char *id, bool *found) const = 0;
//    virtual const char *getString(const char *locale, const char *id, bool *found) const = 0;
//
//    static const GUID ID;
//};
//
//class INDICORE ITags : public IObject
//{
// protected:
//    ITags();
// public:
//    virtual const IParameterConstant *get(const char *name) const = 0;
//    virtual void set(const char *name, const IParameterConstant *value) = 0;
//    virtual void set(const char *name, bool value) = 0;
//    virtual void set(const char *name, int value) = 0;
//    virtual void set(const char *name, double value) = 0;
//    virtual void set(const char *name, const char *value) = 0;
//    virtual bool exists(const char *id) const = 0;
//    virtual void remove(const char *id) = 0;
//    virtual index_t size() = 0;
//    virtual const char *name(index_t index) = 0;
//    static const GUID ID;
//};
//
//class IDomain;
//class IInstance;
//
///** Profile as it is seen by the indicore client. */
//class INDICORE IProfile : public IObjectNoRef
//{
// protected:
//    IProfile();
// public:
//    /** Type of the profile. */
//    virtual ILanguageService::ObjectType getType() = 0;
//
//    /** Type of implementation. */
//    virtual ILanguageService::Language getLanguage() = 0;
//
//    /** Identifier of the source in the file accessor. */
//    virtual const char *getObjectID() = 0;
//
//    /** Identifier of the profile. */
//    virtual const char *getID() = 0;
//
//    /** Name of the profile. */
//    virtual const char *getName() = 0;
//
//    /** Description of the profile. */
//    virtual const char *getDescription() = 0;
//
//    /** Get parameters associated with the profile. */
//    virtual IParameters *getParameters() = 0;
//
//    /** Get tags. */
//    virtual ITags *getTags() = 0;
//
//    /** checks whether profile is public. */
//    virtual bool isPublic() = 0;
//
//    /** File accessor used to create the profile. */
//    virtual IFileAccessor *getFileAccessor() = 0;
//
//    /** Get number of active instances. */
//    virtual int activeInstances() = 0;
//
//    /** Get domain of the profile. */
//    virtual IDomain *getDomain() = 0;
//
//    /** Get a host associated with the domain. */
//    virtual IHost *getHost() = 0;
//
//    static const GUID ID;
//};
//
//class INDICORE IProfiles : public IObjectNoRef
//{
// protected:
//    IProfiles();
//
// public:
//    virtual index_t size() = 0;
//    virtual IProfile *getProfile(index_t index) = 0;
//
//    static const GUID ID;
//};
//
//class IIndicatorInstance;
//class IPriceStream;
//
//class INDICORE IIndicatorProfile : public IProfile
//{
// protected:
//    IIndicatorProfile();
// public:
//    enum RequiredSource
//    {
//        Tick = 1,
//        Bar = 2,            //this value should be equal to IOutputStream::OutputType::Bar
//    };
//    virtual RequiredSource getRequiredSource() = 0;
//
//    enum IndicatorType
//    {
//        Indicator = 1,
//        Oscillator,
//        View,
//    };
//
//    virtual IndicatorType getIndicatorType() = 0;
//
//    virtual IIndicatorInstance *createInstance(IHost *host, IPriceStream *source, IParameters *params) = 0;
//
//    static const GUID ID;
//};
//
//class INDICORE IIndicatorProfiles : public IObject
//{
// protected:
//    IIndicatorProfiles();
// public:
//    virtual index_t size() = 0;
//    virtual IIndicatorProfile *getProfile(index_t index) = 0;
//    virtual IIndicatorProfile *getProfile(const char *id) = 0;
//    static const GUID ID;
//};
//
//class IPermissions;
//
//class INDICORE IIndicatorProfileCallback : public IIndicatorProfile
//{
// protected:
//    IIndicatorProfileCallback();
// public:
//    virtual void setID(const char *id) = 0;
//    virtual void setName(const char *name) = 0;
//    virtual void setDescription(const char *name) = 0;
//    virtual ParameterFactory *getParametersFactory() = 0;
//    virtual void setRequiredSource(IIndicatorProfile::RequiredSource source) = 0;
//    virtual void setIndicatorType(IIndicatorProfile::IndicatorType type) = 0;
//    virtual IPermissions *getPermissions() = 0;
//    static const GUID ID;
//};
//
//class IIndicatorInstanceImplementation;
//
//class INDICORE IIndicatorProfileImplementation : public IObject
//{
// protected:
//    IIndicatorProfileImplementation();
// public:
//    virtual bool init(IIndicatorProfileCallback *profile, IError **pperror) = 0;
//    virtual ILanguageService::Language getLanguage() = 0;
//    virtual IIndicatorInstanceImplementation *getInstanceImplementation() = 0;
//    static const GUID ID;
//};
//
//
//class IStrategyInstance;
//
//class INDICORE IStrategyProfile : public IProfile
//{
// protected:
//    IStrategyProfile();
// public:
//    enum StrategyType
//    {
//        Unknown = 1,
//        Signal,
//        Strategy,
//        Both,
//    };
//    virtual StrategyType getStrategyType() = 0;
//    virtual IStrategyInstance *createInstance(IHost *host, IPriceStream *bid, IPriceStream *ask, IParameters *params) = 0;
//    static const GUID ID;
//};
//
//class INDICORE IStrategyProfileCallback : public IStrategyProfile
//{
// protected:
//    IStrategyProfileCallback();
// public:
//    virtual void setID(const char *id) = 0;
//    virtual void setName(const char *name) = 0;
//    virtual void setDescription(const char *name) = 0;
//    virtual ParameterFactory *getParametersFactory() = 0;
//    virtual void setStrategyType(IStrategyProfile::StrategyType type) = 0;
//    virtual IPermissions *getPermissions() = 0;
//    static const GUID ID;
//};
//
//class IStrategyInstanceImplementation;
//
//class INDICORE IStrategyProfileImplementation : public IObject
//{
// protected:
//    IStrategyProfileImplementation();
// public:
//    virtual bool init(IStrategyProfileCallback *profile, IError **pperror) = 0;
//    virtual ILanguageService::Language getLanguage() = 0;
//    virtual IStrategyInstanceImplementation *getInstanceImplementation() = 0;
//    static const GUID ID;
//};
//
//class INDICORE IStrategyProfiles : public IObject
//{
// protected:
//    IStrategyProfiles();
// public:
//    virtual index_t size() = 0;
//    virtual IStrategyProfile *getProfile(index_t index) = 0;
//    virtual IStrategyProfile *getProfile(const char *id) = 0;
//    static const GUID ID;
//};
//
//
//};
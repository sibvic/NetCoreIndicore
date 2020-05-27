//TODO: convert
//#pragma once
//
//#include "iinstance.h"
//
//namespace indicore3
//{
//class INDICORE IMacroInstance : public IInstance
//{
// protected:
//    IMacroInstance();
//    virtual ~IMacroInstance();
// public:
//    virtual bool execute(indicore3::IError **pperror) = 0;
//    virtual bool execute(indicore3::IParameters *parameters, indicore3::IError **pperror) = 0;
//    virtual bool kill(indicore3::IError **pperror) = 0;
//    static const GUID ID;
//};
//
//class INDICORE IMacroInstanceCallback : public IMacroInstance
//{
// protected:
//    IMacroInstanceCallback();
//    virtual ~IMacroInstanceCallback();
// public:
//    static const GUID ID;
//};
//
//class INDICORE IMacroInstanceImplementation : public IExecutable
//{
// protected:
//    IMacroInstanceImplementation();
//    virtual ~IMacroInstanceImplementation();
// public:
//    virtual bool init(IMacroInstanceCallback *callback, IError **pperror) = 0;
//    virtual bool releaseInstance(IError **pperror) = 0;
//    virtual bool execute(indicore3::IError **pperror) = 0;
//    virtual bool execute(indicore3::IParameters *parameters, indicore3::IError **pperror) = 0;
//    virtual IInstance::NotifyFinishedResult notifyFinished(int cookie, IValueMap *vmap, IError **pperror) = 0;
//    virtual bool kill(indicore3::IError **pperror) = 0;
//
//    static const GUID ID;
//};
//
//}

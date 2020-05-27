//TODO: convert
//#pragma once
//
//namespace indicore3
//{
//
//class ValueMap;
//
//class INDICORE ExecutableArgs : public TAddRefImpl<IExecutableArgs>
//{
// private:
//    ValueMap *mParams;
//    ValueMap *mReturnCode;
//    IError *mError;
//    bool mSuccessful;
// protected:
//    
// public:
//    ExecutableArgs();
//    ExecutableArgs(ValueMap *args);
//   ~ExecutableArgs();
//
//    virtual const IValueMap *args() const;
//    virtual IValueMap *returnValue();
//    virtual bool isSuccessful() const;
//    virtual void throwError(IError *error);
//    virtual IError *getError() const;
//
//    DECLARE_ID_MAP()
//
//};
//
//class INDICORE ExecutableArgsStatic : public TAddRefImpl<IExecutableArgs>
//{
// private:
//    ValueMapFixedSize *mParams;
//    ValueMap *mReturnCode;
//    IError *mError;
//    bool mSuccessful;
//    
// public:    
//    ExecutableArgsStatic(ValueMapFixedSize *args);
//   ~ExecutableArgsStatic();
//
//    virtual const IValueMap *args() const;
//    virtual IValueMap *returnValue();
//    virtual bool isSuccessful() const;
//    virtual void throwError(IError *error);
//    virtual IError *getError() const;
//
//
////    ValueMap *getArgsForInit();    
//
//    DECLARE_ID_MAP()
//
//};
//
//
//}
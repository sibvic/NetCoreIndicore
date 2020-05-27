//TODO: convert
//#pragma once
//namespace indicore3
//{
//
//class INDICORE IExecutableArgs : public IObject
//{
// protected:
//    IExecutableArgs();
// public:
//    virtual const IValueMap *args() const = 0;
//    virtual IValueMap *returnValue() = 0;
//    virtual bool isSuccessful() const = 0;
//    virtual void throwError(IError *error) = 0;
//    virtual IError *getError() const = 0;
//    static const GUID ID;
//};
//
//class IInstance;
//
//class INDICORE IExecutable : public IObject
//{
// protected:
//    IExecutable();
// public:
//    enum MemberType
//    {
//        Method,
//        Property,
//    };
//
//    enum InvokeType
//    {
//        InvokeMethod,
//        PropertyGet,
//        PropertySet,
//    };
//
//
//    virtual bool findMember(const char *memberName, int *index, MemberType *type) = 0;
//    virtual void invoke(int member, InvokeType type, IObjectNoRef *caller, IExecutableArgs *arguments) = 0;
//
//    virtual bool isArray() = 0;
//    static const int ArrayInvokeID;
//    static const GUID ID;
//};
//
//}
//TODO: convert
//#pragma once
//
//namespace indicore3
//{
///** Base class for all indicore objects.
//
//    Provides reference counter and interface identification functionality.
//
//    Reference counter rules:
//
//    1) When an object is created or received from the other class it shall be released
//       using release method.
//    2) When an object is stored for a longer period than the method which is received the object
//       as a parameter - the reference counter shall be increased.
//
//    Those object which has script life time rules (such as languages, profiles, i.e. object which must remains as long
//    as the manager remains) has no reference counter.
//  */
//
//class INDICORE IObjectNoRef
//{
// protected:
//    IObjectNoRef();
// public:
//    virtual ~IObjectNoRef();
//
//    /** Checks whether the object supports the interface with the
//        identifier specified. */
//    virtual bool is(GUID guid) const = 0;
//
//    /** Convert object to the interface requested. */
//    virtual bool to(GUID guid, void **ppv) const = 0;
//
//    /** Release object if it is releasable. */
//    void releaseIfNeeded();
//
//    /** Release object if it is releasable. */
//    void addRefIfNeeded();
//
//    /** Unique identifier of the interface. */
//    static const GUID ID;
//};
//
//class INDICORE IObject : public IObjectNoRef
//{
// protected:
//    IObject();
//    virtual ~IObject();
// public:
//    /** Increase reference counter */
//    virtual void addRef() const = 0;
//    /** Decrease reference counter and delete the object is
//        there is no more references.
//
//        The method returns true if the object has been deleted. */
//    virtual bool release() const = 0;
//
//    /** Unique identifier of the interface. */
//    static const GUID ID;
//};
//
//
//
//}
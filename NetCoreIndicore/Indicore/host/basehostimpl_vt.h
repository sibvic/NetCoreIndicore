//TODO: convert
//#pragma once
//
//namespace indicore3
//{
//
//class BaseHostImpl;
//class IInstance;
//class IHostArgument;
//
//template<class T, int B> class BaseHostImplVtT
//{
//    typedef void (T::*HandlerPtr)(IObjectNoRef *caller, IExecutableArgs *arguments);
// public:
//    template <class S> class HandlerInfo
//    {
//     public:
//     private:
//        HandlerPtr mInvokeHandler;
//        HandlerPtr mSetHandler;
//        IExecutable::MemberType mType;
//     public:
//        HandlerInfo()
//        {
//            mType = IExecutable::Method;
//            mInvokeHandler = 0;
//            mSetHandler = 0;
//        }
//
//        HandlerInfo(HandlerPtr invokeHandler)
//        {
//            mType = IExecutable::Method;
//            mInvokeHandler = invokeHandler;
//            mSetHandler = 0;
//        };
//
//        HandlerInfo(HandlerPtr getHandler, HandlerPtr setHandler)
//        {
//            mType = IExecutable::Property;
//            mInvokeHandler = getHandler;
//            mSetHandler = setHandler;
//        };
//
//        HandlerInfo(const HandlerInfo<S> &value)
//        {
//            mType = value.mType;
//            mInvokeHandler = value.mInvokeHandler;
//            mSetHandler = value.mSetHandler;
//        }
//
//        IExecutable::MemberType getType() const
//        {
//            return mType;
//        };
//
//        bool canInvokeOrGet() const
//        {
//            return mInvokeHandler != 0;
//        };
//
//        bool canSet() const
//        {
//            return mSetHandler != 0;
//        };
//
//        void invokeOrGet(T *object, IObjectNoRef *caller, IExecutableArgs *args) const
//        {
//            if (mInvokeHandler != 0 && object != 0)
//                (object->*(mInvokeHandler))(caller, args);
//        };
//
//        void set(S *object, IObjectNoRef *caller, IExecutableArgs *args) const
//        {
//            if (mSetHandler != 0 && object != 0)
//                (object->*(mSetHandler))(caller, args);
//        };
//    };
//
// private:
//    std::vector<HandlerInfo<T> > *mHandles;
//    SpellerLayerT<int> *mNames;
//    std::atomic_int mRefCount;
// protected:
//
//    int mIdxBase;
//
//    void addMember(const char *name, HandlerPtr handler)
//    {
//        mHandles->push_back(HandlerInfo<T>(handler));
//        mNames->add(name, (int)(mHandles->size() - 1));
//    };
//
//    void addProperty(const char *name, HandlerPtr getHandler, HandlerPtr setHandler)
//    {
//        mHandles->push_back(HandlerInfo<T>(getHandler, setHandler));
//        mNames->add(name, (int)(mHandles->size() - 1));
//    };
//
//    void addAlias(const char *name)
//    {
//        mNames->add(name, (int)(mHandles->size() - 1));
//    };
// public:
//     BaseHostImplVtT() : mIdxBase(B)
//    {
//        mHandles = new std::vector<HandlerInfo<T> >();
//        mNames = new SpellerLayerT<int>();
//        mRefCount = 0;
//    }
//
//    virtual ~BaseHostImplVtT()
//    {
//        delete mHandles;
//        delete mNames;
//    }
//
//    void addRef()
//    {
//        mRefCount++;
//    }
//
//    void release()
//    {
//        mRefCount--;
//        if (mRefCount == 0)
//            delete this;
//    }
//
//    bool findMember(const char *memberName, int *index)
//    {
//        int _index;
//        if (mNames->exists(memberName, &_index))
//        {
//            *index = _index + B;
//            return true;
//        }
//        return false;
//
//    };
//    bool checkIndex(int index)
//    {
//        index -= B;
//        return index >= 0 && index < (int)mHandles->size();
//    };
//    const HandlerInfo<T>& getHandler(int index)
//    {
//        index -= B;
//        return mHandles->operator[](index);
//    };
//};
//
//class INDICORE BaseHostImplVt : public BaseHostImplVtT<BaseHostImpl, 0>
//{
//  private:
//    static BaseHostImplVt *mInstance;
//    void initTables();
//  public:
//    static BaseHostImplVt *getInstance();
//    virtual ~BaseHostImplVt()
//    {
//        mInstance = 0;
//    };
//};
//
//}

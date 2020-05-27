//TODO: convert
//#pragma once
///*
// * $Header:  ThreadSafeAddRefImpl.h$
// *
// * Copyright (c) 2010 Forex Capital Markets LLC.
// * 32 Old Slip, 10th Floor, New York NY, 10005 USA
// *
// * THIS SOFTWARE IS THE CONFIDENTIAL AND PROPRIETARY INFORMATION OF
// * FXCM, LLC. ("CONFIDENTIAL INFORMATION"). YOU SHALL NOT DISCLOSE
// * SUCH CONFIDENTIAL INFORMATION AND SHALL USE IT ONLY IN ACCORDANCE
// * WITH THE TERMS OF THE LICENSE AGREEMENT YOU ENTERED INTO WITH
// * FXCM.
// *
// * File description:
// *
// * $History: $
// * 2010/09/15  shma      file is initially created
// */
//
//#include <atomic>
//
//#include "../diagnostic/memorydiagnostic.h"
//
//namespace indicore3
//{
//
//template<typename T> class TAddRefImpl : public T
//{
// public:
//    TAddRefImpl()
//    {
//        m_dwRef = 1;
//        if (MemoryDiagnostic::isEnabled())
//            MemoryDiagnostic::registerObject(this, T::ID);
//
//    }
//
//    virtual ~TAddRefImpl()
//    {
//        if (MemoryDiagnostic::isEnabled())
//            MemoryDiagnostic::releaseObject(this);
//    }
//
//    void addRef() const
//    {
//        ++m_dwRef;
//    }
//
//    bool release() const
//    {
//        const long lResult = --m_dwRef;
//        if (lResult == 0)
//            delete this;
//        return lResult > 0;
//    }
//
// protected:
//    long getRefCount() const
//    {
//        return m_dwRef;
//    }
// private:
//    mutable std::atomic_long m_dwRef {0};
//};
//
//template<typename T> class TObjectCollection : public TAddRefImpl<IObject>
//{
// public:
//    TObjectCollection()
//    {
//        mObjects  = new std::vector<T *>();
//    }
//
//    void add(T *object)
//    {
//        if (object != nullptr)
//            object->addRef();
//        mObjects->push_back(object);
//    }
//
//    index_t size()
//    {
//        return mObjects->size();
//    }
//
//    T * get(index_t index)
//    {
//        if (index < 0 || index >= mObjects->size())
//            return nullptr;
//        if (mObjects->at(index) != nullptr)
//            mObjects->at(index)->addRef();
//        return mObjects->at(index);
//    }
//
//    template<typename T1> T1 *as(index_t index)
//    {
//        T *t = mObjects->at(index);
//        if (t == nullptr)
//            return nullptr;
//        if (!t->is(T1::ID))
//        {
//            t->release();
//            return nullptr;
//        }
//        else
//        {
//            T1 *pt = nullptr;
//            t->to(T1::ID, (void **)&pt);
//            if (pt == nullptr)
//            {
//                t->release();
//                return nullptr;
//            }
//            else
//                return pt;
//        }
//    }
//
//    void remove(index_t index)
//    {
//        if (index < 0 || index >= mObjects->size())
//            return;
//        if (mObjects->at(index) != nullptr)
//            mObjects->at(index)->release();
//        mObjects->erase(mObjects->begin() + index);
//    }
//
//    void clear()
//    {
//        for (index_t i = 0; i < mObjects->size(); i++)
//            if (mObjects->at(i) != nullptr)
//                mObjects->at(i)->release();
//        mObjects->clear();
//    };
//
//    virtual bool is(GUID id) const
//    {
//        if (id == IObject::ID)
//            return true;
//        else
//            return false;
//    };
//
//    virtual bool to(GUID id, void **ppv) const
//    {
//        if (id == IObject::ID)
//        {
//            *ppv = (IObject *)(this);
//            return true;
//        }
//        else
//        {
//            return false;
//        }
//    };
//
// protected:
//    ~TObjectCollection()
//    {
//        clear();
//        delete mObjects;
//    };
//    std::vector<T *> *mObjects;
//};
//
//
//
//#define DECLARE_ID_MAP() virtual bool is(GUID id) const; \
//                         virtual bool to(GUID id, void **ppv) const;
//#define DECLARE_ID() static const GUID ID;
//
//#define CLASS_ID(Class, guid) const GUID Class::ID = guid;
//
//#define BEGIN_IS_MAP(Class) bool Class::is(GUID id) const {
//
//#define BEGIN_IS_MAP_TEMPLATE(Class, Type) template<typename Type> bool Class<Type>::is(GUID id) const {
//
//#define END_IS_MAP() return false; }
//
//#define MAP_IS(Class) if (id == Class::ID) return true;
//
//#define BEGIN_TO_MAP(Class) bool Class::to(GUID id, void **ppv) const { *ppv = 0;
//
//#define BEGIN_TO_MAP_TEMPLATE(Class, TYPE) template<typename Type> bool Class<Type>::to(GUID id, void **ppv) const { *ppv = 0;
//
//#define END_TO_MAP() return false; }
//
//#define MAP_TO(Class) if (id == Class::ID) {*ppv = (Class *)this; return true; }
//
//}
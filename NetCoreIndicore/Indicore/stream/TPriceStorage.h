//TODO: convert
//#pragma once
//
//namespace indicore3
//{
//
//template<typename T> class INDICORE TPriceDataFactory
//{
// protected:
//    template <typename TT> class INDICORE circularbuffere : public circularbuffer<TT> {};
//    circularbuffere<T *> mPool;
// public:
//    TPriceDataFactory<T>(int maxPoolSize = 1024)
//    {
//        mPool.init(maxPoolSize);
//    }
//
//    T *create()
//    {
//        if (mPool.empty())
//        {
//            T *t = new T;
//            memset (t, 0, sizeof(T));
//            return t;
//        }
//        else
//        {
//            T *t = mPool.getFirst();
//            mPool.remove();
//            return t;
//        }
//    }
//
//    void release(T *t)
//    {
//        if (mPool.full())
//            delete t;
//        else
//            mPool.push_back(t);
//    }
//
//    void clear()
//    {
//        while (!mPool.empty())
//        {
//            delete mPool.getFirst();
//            mPool.remove();
//        }
//    }
//};
//
//template<typename T> class INDICORE TPriceStorage : public TAddRefImpl<IObject>
//{
// private:
//    TPriceDataFactory<T> mFactory;
// protected:
//    std::string mName;
//    std::string mInstrument;
//    int mPrecision;
//    int mDisplayPrecision;
//    double mPipSize;
//    bool mAlive;
//    bool mSupportsVolume;
//    int mID;
//    index_t mLimit;
//    int mPriceSerial;
//    template <typename TT> class INDICORE fastvectore : public fastvector<TT>
//    {
//     public:
//        fastvectore<TT>(unsigned int limit) : fastvector<TT>(limit) {};
//    };
//    fastvectore<T *> mData;
//    T *mLastItem;
//    index_t mLastIndex;
//    index_t mInstrumentIndex;
//    index_t mRemovedFromStart;
//
//    ~TPriceStorage<T>();
// public:
//    TPriceStorage<T>(const char *name, const char *instrument, int precision, int displayprecision, double pipSize, bool supportsVolume, bool alive, int id, index_t limit, index_t instrumentIndex);
//
//    index_t getInstrumentIndex();
//
//    /** Returns the name of the history. */
//    const char *getName();
//
//    bool supportsVolume();
//
//    const char *getInstrument();
//
//    bool isAlive();
//
//    int getPrecision();
//
//    int getDisplayPrecision();
//
//    double getPipSize();
//
//    int getSourceID();
//
//    index_t size();
//
//    index_t removedFromStart();
//
//    void start(index_t from, IPriceStream::iterator *iter);
//
//    T *next(IPriceStream::iterator *iter);
//
//    index_t getPeriodsLimit() const;
//
// protected:
//    void remove(index_t count);
//
//    T *get(index_t index);
//
//    T *at(index_t index);
//
//    T *create();
//
//    void releaseData(T *t);
//
//    void add(T *t);
//
//    bool insertFirst(T *t);
//
//    void clear();
//};
//
//};

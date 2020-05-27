//TODO: convert
//#pragma once
//
//namespace indicore3
//{
//
//#define CHUNK_BITS 10                                       //number of bits in chunk index 10 is for 0...1023
//#define CHUNK_SIZE (1 << (CHUNK_BITS))                      //size of the chunks                      1024 for 10 bits
//#define CHUNK_INDEX_MASK (~(0xffffffff << CHUNK_BITS))      //chunk index max                         0x3ff for 10 bits
//#define LAST_CHUNK CHUNK_SIZE - 1
//
///** The vector with fast "remove from top" and relatively fast indexing operations. */
//template<class T> class fastvector
//{
// protected:
//    T **mChunks;
//    unsigned int mChunksLimit;
//    unsigned int mLimit;
//    index_t mSize;
//    unsigned int mFirstInFirst;
//    unsigned int mSecondChunkFirstIndex;
//
//    inline void indexToChunk(index_t index, unsigned int &chunk, unsigned int &offset) const
//    {
//        if (index < mSecondChunkFirstIndex)
//        {
//            chunk = 0;
//            offset = mFirstInFirst + index;
//        }
//        else
//        {
//            index -= mSecondChunkFirstIndex;
//            chunk = (unsigned int)((index >> CHUNK_BITS) + 1);
//            offset = (unsigned int)(index & CHUNK_INDEX_MASK);
//        }
//    };
//
// public:
//    fastvector(unsigned int limit = 1048576)
//    {
//        mFirstInFirst = 0;
//        mSecondChunkFirstIndex = CHUNK_SIZE;
//        mSize = 0;
//        mLimit = limit;
//        mChunksLimit = limit / CHUNK_SIZE + 2;
//        mChunks = new T*[mChunksLimit];
//        memset(mChunks, 0, sizeof(T *) * mChunksLimit);
//    };
//
//    virtual ~fastvector()
//    {
//        clear();
//        delete [] mChunks;
//    };
//
//    void push_back(T value)
//    {
//        unsigned int chunk, offset;
//        T *pchunk;
//        indexToChunk(mSize, chunk, offset);
//        if (mChunks[chunk] == 0)
//            mChunks[chunk] = (pchunk = new T[CHUNK_SIZE]);
//        else
//            pchunk = mChunks[chunk];
//
//        pchunk[offset] = value;
//        mSize++;
//    };
//
//    void push_front(T value)
//    {
//        if (mSize == 0)
//        {
//            push_back(value);
//            return;
//        }
//        if (mFirstInFirst > 0)
//        {
//            mFirstInFirst--;
//            mSecondChunkFirstIndex++;
//        }
//        else
//        {
//            unsigned int chunk, offset;
//            indexToChunk(mSize - 1, chunk, offset);
//            if (chunk == mChunksLimit - 1)
//            {
//                const std::string erText("the vector is full");
//                throw new std::out_of_range(erText);
//            }
//
//            memmove(mChunks + 1, mChunks, (chunk + 1) * sizeof(T *));
//            mChunks[0] = new T[CHUNK_SIZE];
//
//            mFirstInFirst = CHUNK_SIZE - 1;
//            mSecondChunkFirstIndex = 1;
//        }
//
//        *(*mChunks + mFirstInFirst) = value;
//        mSize++;
//    }
//
//    inline T get(index_t index) const
//    {
//        if (index < mSize)
//        {
//            unsigned int chunk, offset;
//
//            indexToChunk(index, chunk, offset);
//            return *(*(mChunks + chunk) + offset);
//        }
//        const std::string erText("index is out of range");
//        throw new std::out_of_range(erText);
//    };
//
//    void set(index_t index, T value)
//    {
//        if (index < mSize)
//        {
//            unsigned int chunk, offset;
//            indexToChunk(index, chunk, offset);
//            *(*(mChunks + chunk) + offset) = value;
//        }
//        const std::string erText("index is out of range");
//        throw new std::out_of_range(erText);
//    };
//
//    void remove(index_t count = 1)
//    {
//        if (count > mSize)
//            count = mSize;
//
//        unsigned int chunk, offset;
//        indexToChunk(count, chunk, offset);
//        while (chunk > 0)
//        {
//            //T* c = mChunks[0];
//            delete[] mChunks[0];
//            //memcpy(mChunks, mChunks + 1, sizeof(double *) * (mChunksLimit - 1));
//            // TCL 05 May 2013. memcpy leads to UB when source & dest overlapped
//            memmove(mChunks, mChunks + 1, sizeof(T *) * (mChunksLimit - 1));
//            mChunks[mChunksLimit - 1] = 0;
//            chunk--;
//        }
//
//        mSize -= count;
//        mFirstInFirst = offset;
//        mSecondChunkFirstIndex = CHUNK_SIZE - mFirstInFirst;
//    };
//
//    void clear()
//    {
//        for (unsigned int i = 0; i < mChunksLimit; i++)
//            if (mChunks[i] != 0)
//                delete []mChunks[i];
//        mFirstInFirst = mSecondChunkFirstIndex = 0;
//        mSize = 0;
//        memset(mChunks, 0, sizeof(double *) * mChunksLimit);
//    };
//
//    index_t size() const
//    {
//        return mSize;
//    };
//
//    unsigned int limit() const
//    {
//        return mLimit;
//    }
//
//    bool full() const
//    {
//        return mSize >= mLimit;
//    }
//
//    typedef struct
//    {
//        T* current;
//        T* chunkEnd;
//        T* end;
//        unsigned int chunk;
//    }iterator;
//
//    void start(index_t from, iterator *iter) const
//    {
//        unsigned int chunk, offset;
//        indexToChunk(from, chunk, offset);
//        iter->current = (*(mChunks + chunk) + offset);
//        iter->chunkEnd = iter->current - offset + CHUNK_SIZE;
//        iter->chunk = chunk;
//
//        indexToChunk(mSize, chunk, offset);
//        iter->end = (*(mChunks + chunk) + offset);
//    };
//
//    T next(iterator *iter) const
//    {
//        T v = *(iter->current);
//        iter->current++;
//        if (iter->current == iter->chunkEnd)
//        {
//            iter->chunk++;
//            iter->current = *(mChunks + iter->chunk);
//            iter->chunkEnd = iter->current + CHUNK_SIZE;
//        }
//        return v;
//    };
//
//    static inline bool isLast(iterator *iter)
//    {
//        return iter->current == NULL || iter->current == iter->end;
//    }
//};
//
//template<typename T> class circularbuffer
//{
// private:
//    index_t mEnd;
//    index_t mSize;
//    index_t mStart;
//    index_t mCount;
//    T *mBuffer;
// public:
//
//    typedef struct
//    {
//        T* current;
//        T* bufferEnd;
//        T* end;
//        unsigned int chunk;
//    }iterator;
//
//    circularbuffer()
//    {
//        mStart = 0;
//        mCount = 0;
//        mEnd = 0;
//        mSize = 0;
//        mBuffer = 0;
//    }
//
//    circularbuffer(index_t maxsize)
//    {
//        mStart = 0;
//        mCount = 0;
//        mEnd = 0;
//        mSize = maxsize;
//        mBuffer = new T[mSize];
//    };
//
//    void init(index_t maxsize)
//    {
//        if (mBuffer != 0)
//            delete[] mBuffer;
//        mStart = 0;
//        mEnd = 0;
//        mCount = 0;
//        mSize = maxsize;
//        mBuffer = new T[mSize];
//    }
//
//    ~circularbuffer()
//    {
//        if (mBuffer != 0)
//            delete[] mBuffer;
//    };
//
//    bool empty() const
//    {
//        return mCount == 0;
//    };
//
//    T getFirst() const
//    {
//        return mBuffer[mStart];
//    }
//    
//    inline T get(index_t index)
//    {
//        index_t pos =  mStart + index;        
//        if (pos >= mSize)        
//            return mBuffer[pos - mSize];
//        
//        return mBuffer[pos];
//        //return mBuffer[(mStart + index) % mSize];
//    }
//
//    void remove()
//    {
//        if (mCount == 0)
//            return ;
//        if (mStart == mSize - 1)
//            mStart = 0;
//        else
//            mStart = (mStart + 1);
//
//        //mStart = (mStart + 1) % mSize;
//        mCount--;
//    }
//
//    void remove(index_t count)
//    {
//        if (mCount == 0)
//            return;
//
//        if (count >= mCount)
//        {
//            clear();
//            return;
//        }
//        /*index_t pos = mStart + count;
//        if (pos >= mSize)
//            mStart = pos - mSize;
//        else 
//            mStart = pos;*/
//        mStart = (mStart + count) % mSize;
//        mCount = mCount - count;
//    }
//
//    bool full() const
//    {
//        return mCount == mSize;
//    }
//
//    bool push_back(T value)
//    {
//        if (mCount == mSize)
//            return false;
//        mBuffer[mEnd] = value;
//        mEnd = (mEnd + 1) % mSize ;
//        /*if (mEnd == mSize)
//            mEnd = 0;*/
//        mCount++;
//        return true;
//    }
//
//    void clear()
//    {
//        mStart = 0;
//        mEnd   = 0;
//        mCount = 0;
//
//    }
//
//    index_t size() const
//    {
//        return mCount;
//    }
//    
//    index_t limit() const
//    {
//        return mCount;
//    }
//    
//
//    void start(index_t from, iterator *iter) const
//    {
//        iter->current =  mBuffer + ((mStart + from) % mSize);
//        iter->end = mBuffer + mEnd;
//        iter->bufferEnd = mBuffer + mSize - 1;
//        iter->chunk = 0;
//
//    };
//
//    T next(iterator *iter) const
//    {
//        T v = *iter->current;
//        if (iter->current == iter->bufferEnd)        
//            iter->current = mBuffer;
//        else
//            iter->current++;
//        return v;
//    };
//
//    static inline bool isLast(iterator *iter)
//    {
//        return iter->current == NULL || iter->current == iter->end;
//    }
//};
//
//}

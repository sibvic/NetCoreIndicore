//TODO: convert
//
//namespace indicore3
//{
//
//#define CHARSETSIZE (128 - 0x30)
//#define CHARSETOFFSET 0x30
//
//// 0x39 - 0x30
//// 0x5A - 0x41
//// 0x7A - 0x61
//
//template<class T> class INDICORE SpellerLayerT
//{
//  private:
//    bool mHasLetter[CHARSETSIZE];
//    SpellerLayerT<T> *mNextLayer[CHARSETSIZE];
//    T mAssociated[CHARSETSIZE];
//    bool mHasAssociated[CHARSETSIZE];
//  public:
//    SpellerLayerT()
//    {
//        for (int i = 0; i < CHARSETSIZE; i++)
//        {
//            mHasLetter[i] = false;
//            mNextLayer[i] = (SpellerLayerT<T> *)0;
//            mAssociated[i] = (T)0;
//            mHasAssociated[i] = false;
//        }
//    };
//
//    ~SpellerLayerT()
//    {
//        for (int i = 0; i < CHARSETSIZE; i++)
//        {
//            if (mNextLayer[i] != 0)
//            {
//                delete mNextLayer[i];
//            }
//        }
//    };
//
//    void add(const char *word, T data)
//    {
//        int index = (int)(unsigned int)*word;
//
//        if ((index >= 0x30 && index <= 0x39) ||
//            (index >= 0x41 && index <= 0x5A) ||
//            (index >= 0x61 && index <= 0x7A))
//            ;
//        else
//        {
//            const std::string erText("character is out of the charset");
//            throw std::runtime_error(erText);
//        }
//        index -= CHARSETOFFSET;
//
//        mHasLetter[index] = true;
//        if (*(word + 1) == 0)
//        {
//            mAssociated[index] = data;
//            mHasAssociated[index] = true;
//        }
//        else
//        {
//            if (mNextLayer[index] == 0)
//                mNextLayer[index] = new SpellerLayerT<T>();
//            mNextLayer[index]->add(word + 1, data);
//        }
//        return;
//    };
//
//    bool exists(const char *word, T* data)
//    {
//        int index = (int)(unsigned int)*word - CHARSETOFFSET;
//        if (index < 0 || index >= CHARSETSIZE)
//        {
//            const std::string erText("character is out of the charset");
//            throw std::runtime_error(erText);
//        }
//        if (!mHasLetter[index])
//            return false;
//        else if (*(word + 1) == 0)
//             {
//                 if (mHasAssociated[index])
//                 {
//                    *data = mAssociated[index];
//                    return true;
//                 }
//                 return false;
//             }
//             else if (mNextLayer[index] != 0)
//                      return mNextLayer[index]->exists(word + 1, data);
//                  else
//                      return false;
//    };
//
//    int size()
//    {
//        int mySize = sizeof(T) * CHARSETSIZE + sizeof(bool) * CHARSETSIZE * 2 + sizeof(void *) * CHARSETSIZE;
//        for (int i = 0; i < CHARSETSIZE; i++)
//        {
//            if (mNextLayer[i] != 0)
//                mySize += mNextLayer[i]->size();
//        }
//        return mySize;
//    };
//};
//
//}
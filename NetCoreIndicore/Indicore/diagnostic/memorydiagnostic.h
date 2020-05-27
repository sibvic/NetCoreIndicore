//TODO: convert
//#pragma once
//
//namespace indicore3
//{
//
//class INDICORE MemoryDiagnostic
//{
// public:
//    struct ClassRecord
//    {
//        void *object;
//        GUID classId;
//        bool released;
//    };
//
//    static inline bool isEnabled()
//    {
//        return gEnabled != 0;
//    };
//    static void enable(bool enable);
//    static void release();
//    static void registerObject(void *object, GUID id);
//    static void releaseObject(void *object);
//    static index_t size();
//    static const ClassRecord *get(index_t index);
//    static bool allReleasedSince(index_t index);
// private:
//    static int gEnabled;
//    static std::vector<ClassRecord *> *gRecords;
//};
//
//}
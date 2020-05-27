//TODO: convert
//#pragma once
//
//namespace indicore3
//{
//
//class INDICORE ErrorFactory
//{
// public:
//    /** Throws error into the error list,
//        creates the error list if needed for the indicore standard error handle routine, i.e.
//
//        IError *perrors = 0;
//        if (!myMethod(&perrors))
//        {
//            if (perrors != 0)
//            {
//                handle(perrors);
//                perrors->release();
//            }
//        }
//      */
//    static void throwStack(IError **pperrors, IError *perrors);
//    static void throwError(IError **pperrors, IError::ErrorStage stage, IError::ErrorCode code, const char *message);
//    static void throwError(IError **pperrors, IError::ErrorStage stage, IError::ErrorCode code, const char *message, const char *file);
//    static void throwError(IError **pperrors, IError::ErrorStage stage, IError::ErrorCode code, const char *message, const char *file, int line);
//    static void throwError(IError **pperrors, IError::ErrorStage stage, IError::ErrorCode code, const char *message, const char *file, int line, int column);
//};
//
//}
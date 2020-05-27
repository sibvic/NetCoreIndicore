//TODO: convert
//#pragma once
//#include "../basicImpl/StringList.h"
//#if !defined(WIN32) && !defined(__USE_GSTOOL_DATE__)
//
//#   ifndef SYSTEMTIME_DEFINED
//typedef struct _SYSTEMTIME {
//    WORD wYear;
//    WORD wMonth;
//    WORD wDayOfWeek;
//    WORD wDay;
//    WORD wHour;
//    WORD wMinute;
//    WORD wSecond;
//    WORD wMilliseconds;
//} SYSTEMTIME, *PSYSTEMTIME, *LPSYSTEMTIME;
//
//#   define SYSTEMTIME_DEFINED
//#   endif
//
//#   ifndef WCHAR
//  typedef wchar_t WCHAR;
//#   endif
//
//#   ifndef TIME_ZONE_INFORMATION_DEFINED
//typedef struct _TIME_ZONE_INFORMATION {
//    long Bias;
//    WCHAR StandardName[ 32 ];
//    SYSTEMTIME StandardDate;
//    long StandardBias;
//    WCHAR DaylightName[ 32 ];
//    SYSTEMTIME DaylightDate;
//    long DaylightBias;
//} TIME_ZONE_INFORMATION, *PTIME_ZONE_INFORMATION, *LPTIME_ZONE_INFORMATION;
//#       define TIME_ZONE_ID_INVALID  ((DWORD)0xFFFFFFFF)
//#       define TIME_ZONE_ID_UNKNOWN  ((DWORD)0)
//#       define TIME_ZONE_ID_STANDARD ((DWORD)1)
//#       define TIME_ZONE_ID_DAYLIGHT ((DWORD)2)
//#   define TIME_ZONE_INFORMATION_DEFINED
//#   endif
//
//#endif //WIN32
//
//struct TIME_ZONE_INFORMATION_EX : public TIME_ZONE_INFORMATION
//{
//     TIME_ZONE_INFORMATION_EX()
//     {
//     }
//     double oleBias = 0;
//     double oleStandardBias = 0;
//     double oleDayLightBias = 0;
//};
//
//typedef TIME_ZONE_INFORMATION_EX *PTIME_ZONE_INFORMATION_EX, *LPTIME_ZONE_INFORMATION_EX;
///** For more information, see http://msdn2.microsoft.com/en-us/library/ms725481.aspx */
//typedef struct _REG_TZI_FORMAT
//{
//    LONG Bias;
//    LONG StandardBias;
//    LONG DaylightBias;
//    SYSTEMTIME StandardDate;
//    SYSTEMTIME DaylightDate;
//} REG_TZI_FORMAT;
//
//namespace indicore3
//{
//class IString;
//class INDICORE DateUtil
//{
// public:
//    static bool OleTimeToWindowsTime(double dt, SYSTEMTIME *st);
//    static bool WindowsTimeToOleTime(SYSTEMTIME *st, double *dt);
//    static double Now();
//
//    static int OleTimeToCTime(double dt, struct tm *t);
//    static int CTimeToOleTime(struct tm *t, double *dt);
//    static void CTimeToWindowsTime(const struct tm *t, SYSTEMTIME *st);
//    static void WindowsTimeToCTime(const SYSTEMTIME *st, struct tm *t);
//    static void GetLocalWindowsTime(SYSTEMTIME *st);
//    static void GetSystemWindowsTime(SYSTEMTIME *st);
//    static bool TzSpecificLocalTimeToUTCTime(LPTIME_ZONE_INFORMATION lpTimeZoneInformation,
//                                             LPSYSTEMTIME lpLocalTime,
//                                             LPSYSTEMTIME lpUniversalTime);
//    static bool UTCTimeToTzSpecificLocalTime(LPTIME_ZONE_INFORMATION lpTimeZoneInformation,
//                                             LPSYSTEMTIME lpUniversalTime,
//                                             LPSYSTEMTIME lpLocalTime);
//
//
//    static bool TzSpecificLocalTimeToUTCTime(LPTIME_ZONE_INFORMATION_EX lpTimeZoneInformationEx,
//                                             double LocalTime,
//                                             double &lpUniversalTime);
//    static bool UTCTimeToTzSpecificLocalTime(LPTIME_ZONE_INFORMATION_EX lpTimeZoneInformationEx,
//                                             double lpUniversalTime,
//                                             double &lpLocalTime);
//
//
//    enum eTimeZone
//    {
//        Local,
//        EST,
//        UTC
//    };
//
//    static double DateConvertTz(double dt, eTimeZone tzFrom, eTimeZone tzTo);
//
//    static double OneSecond();
//    
//#ifdef WIN32
//    // User must delete result
//    static void getTimeZonesList(IStringList **keys);
//    static bool getTimeZone(const char *tzname, TIME_ZONE_INFORMATION *tz);
//    static void getCurrentTimeZone(TIME_ZONE_INFORMATION *tz);
//#endif
//};
//
//}
//
//#if !defined(WIN32) && !defined(__USE_GSTOOL_DATE__)
////#   define GetLocalTime(A) indicore3::DateUtil::GetLocalWindowsTime(A)
////#   define GetSystemTime(A) indicore3::DateUtil::GetSystemWindowsTime(A)
//#   define TzSpecificLocalTimeToSystemTime(A,B,C) indicore3::DateUtil::TzSpecificLocalTimeToUTCTime(A,B,C)
//#   define SystemTimeToTzSpecificLocalTime(A,B,C) indicore3::DateUtil::UTCTimeToTzSpecificLocalTime(A,B,C)
//    #define VariantTimeToSystemTime(A,B) indicore3::DateUtil::OleTimeToWindowsTime(A,B)
//    #define SystemTimeToVariantTime(A,B) indicore3::DateUtil::WindowsTimeToOleTime(A,B)
//    #define UnixTimeToVariantTime(A,B) indicore3::DateUtil::CTimeToOleTime(A,B)
//    #define UnixTimeToSystemTime(A,B) indicore3::DateUtil::CTimeToWindowsTime(A,B)
//    #define SystemTimeToUnixTime(A,B) indicore3::DateUtil::WindowsTimeToCTime(A,B)
//#   define strptime(A,B,C) indicore3::DateUtil::DateStringToCTime(A,B,C)
//#endif
//

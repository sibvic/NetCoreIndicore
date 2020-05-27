//TODO: convert
//#pragma once
//namespace indicore3
//{
//
////candles in the EST's servers starts at 17:00 of the yesterday
//#define EST_START_HOUR -7
//#define EST_WEEK_START 0        //Sunday is a start candle
//
///** Default start date value */
//#define gDefaultStartDateOfMillennium 36526.0 // 2000, January 1, 00:00:00
//
///** The period of the data grouping for the candle/bar. */
//class INDICORE CandlePeriod
//{
// public:
//    /** The measurement unit for the periods. */
//    typedef enum
//    {
//        Tick = 0,
//        Minute = 1,
//        Hour = 2,
//        Day = 3,
//        Week = 4,
//        Month = 5,
//        Year = 6,
//    }Unit;
//
//    /** Validates unit and length. */
//    static bool validate(Unit unit, int unitLength);
//
//    /** Parse the period name.
//
//        @param name     Name of the period (TL, where T is a type and L is a length).
//
//        T can be:
//        t   ticks
//        m   minutes
//        H   hours
//        D   days
//        W   weeks
//        M   months
//        Y   years
//      */
//    static bool parsePeriod(const char *name, Unit &unit, int &unitLength);
//
//    /** Gets the start date and time for the candle of the period.
//
//        @param time     The date and time of the tick or candle
//        @param start    [output]The start date and time of the candle
//        @param end      [output]The end date and time of the candle
//      */
//    static bool getCandle(double time, double &start, double &end, Unit unit, int unitLength, int startHourOffset, int startWeekOffset);
//
//    /** Gets the start of the trading day for the specified time. */
//    static double getTradingDayStart(double time, int startHourOffset);
//
//    /** Gets the start and the end the trading month for the specified time. */
//    static void getTradingMonth(double time, double &start, double &end, int startHourOffset);
//
//    /** Gets the start and the end the trading month for the specified time. */
//    static void getTradingYear(double time, double &start, double &end, int startHourOffset);
//
//    /** Checks whether the specified time is in non trading time interval and if it is,
//        fills the lastend parameter with the start time of the non trading period.
//        Only negative or zero offset is taken into the account, otherwise always returns false.
//    */
//    static bool isNonTrading(double date, int startHourOffset, double &lastend);
//
//private:
//
//    /** Gets the start date and end date for the candle of the period from specific start date. */
//    static void getCandleFromSpecificStartDate(__int64 time, __int64 specificStartDate, __int64 periodLength, double &start, double &end);
//
//    static double getTradingWeekStart(double time, int startHourOffset, int startWeekOffset);
//
//    /** Gets the number of the seconds for the specified time. */
//    static _int64 getSeconds(double time);
//};
//
//}

//TODO: convert
//#pragma once
//
//namespace indicore3
//{
//
///** The interface to a row of a trading table. */
//class INDICORE ITradingTableRow : public IObject
//{
// protected:
//    ITradingTableRow();
// public:
//    /** Get the value of the the row's cell.
//
//        @param  column      the name of the column
//        @param  value       [output] the value of the column to be filled
//        @return true in case the column is found in the row.
//      */
//    virtual bool cellValue(const char *column, IParameterValue *value, IError **error) = 0;
//
//    /** Refresh the row value
//
//        @return true in case the row remains in the table and false if row doesn't  exist anymore
//     */
//    virtual bool refresh() = 0;
//    static const GUID ID;
//};
//
///** The interface to the trading data table enumerator. */
//class INDICORE ITradingTableEnumerator : public IObject
//{
// protected:
//    ITradingTableEnumerator();
// public:
//    /** Resets the enumeration, so the next call will return the first row of the table. */
//    virtual void reset() = 0;
//    /** Fetches the next row.
//
//        When row is not required anymore, the release method of the row will be called.
//
//        @return a row or 0 in case no more row exists.
//      */
//    virtual ITradingTableRow *next() = 0;
//
//    static const GUID ID;
//};
//
///** The interface to the trading table. */
//class INDICORE ITradingTable : public IObject
//{
// protected:
//    ITradingTable();
// public:
//
//    virtual bool isFilled() = 0;
//
//    /** Returns the table rows enumerator.
//
//        When the enumerator is not required anymore, the release method will be called.
//      */
//    virtual ITradingTableEnumerator *getEnumerator(IError **error) = 0;
//
//    /** Finds the first row by the key.
//
//        When the row is not required anymore, the release method will be called.
//
//        @param column       The name of the column
//        @param key          the key to find
//
//        @return a row or 0 in case either column or row is not found.
//      */
//    virtual ITradingTableRow *findRow(const char *column, IParameterConstant *key, IError **error) = 0;
//
//    /** Finds all rows by the key.
//
//        @param column       The name of the column
//        @param key          the key to find
//
//        @return the table rows enumerator of found rows.
//            When the enumerator is not required anymore, the release method will be called.
//      */
//    virtual ITradingTableEnumerator *findAll(const char *column, IParameterConstant *key, IError **error) = 0;
//
//    /** Get the table version. */
//    virtual int getVersion() = 0;
//
//    static const GUID ID;
//};
//
//
//}
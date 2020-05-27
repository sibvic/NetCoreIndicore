//TODO: convert
//#pragma once
//
//#include "TPriceStorage.h"
//
//namespace indicore3
//{
//
//typedef struct
//{
//    int serial;
//    double bid;
//    double ask;
//    double volume;
//    double date;
//}TickData;
//
//typedef struct
//{
//    double open;
//    double high;
//    double low;
//    double close;
//}Candle;
//
//typedef struct
//{
//    int serial;
//    Candle bid;
//    Candle ask;
//    double volume;
//    double date;
//    double edate;
//}BarData;
//
//class INDICORE TickPriceStorage : public TPriceStorage<TickData>
//{
// protected:
//    ~TickPriceStorage();
// public:
//    TickPriceStorage(const char *name, const char *instrument, int precision, int displayprecision, double pipSize, bool supportsVolume, bool alive, int id, index_t limit, index_t instrumentIndex);
//    void addTick(double date, double bid, double ask, double volume = 0);
//    bool insertTickFirst(double date, double bid, double ask, double volume = 0);
//    //todo: bool getTick(index_t index, double &date, double &bid, double &ask, double &volume);
//    double date(index_t index);
//    int getSerial(index_t index);
//    double getBid(index_t index);
//    double getAsk(index_t index);
//    double getVolume(index_t index);
//    IPriceStream *getBidPrices();
//    IPriceStream *getAskPrices();
//    void remove(index_t count);
//    DECLARE_ID()
//    DECLARE_ID_MAP()
// private:
//    class ATickPriceStorageTickAdapter : public APriceStream
//    {
//     protected:
//        TickPriceStorage *mStorage;
//        ~ATickPriceStorageTickAdapter();
//     public:
//        ATickPriceStorageTickAdapter(TickPriceStorage *storage);
//
//        index_t removedFromStart();
//
//        /** Returns the name of the history. */
//        virtual const char *getName();
//
//        /** Returns true in case the history is a bar history. */
//        virtual bool isBar();
//
//        /** Gets timeframe name. */
//        virtual const char *getTimeframe();
//
//        /** Returns true in case the source supports trade volume. */
//        virtual bool supportsVolume();
//
//        /** Returns the number of the first period which has actual data. */
//        virtual index_t getFirstPeriod();
//
//        /** Checks whether data source has data at the specified point. */
//        virtual bool hasData(index_t index);
//
//        /** Returns the date and time at the position. */
//        virtual double date(index_t index);
//
//        /** Get the serial number of the first bar in the collection. */
//        virtual int getSerial(index_t index);
//
//        /** Gets the instrument name. */
//        virtual const char *getInstrument();
//
//        /** Gets the pip size. */
//        virtual double getPipSize();
//
//        /** Checks whether the price source is alive. */
//        virtual bool isAlive();
//
//        /** Gets the precision (number of digits after the decimal point). */
//        virtual int getPrecision();
//
//        /** Gets the precision (number of digits after the decimal point) which should be use
//            for displaying the source values.
//            The display precision can be different with the precision(getPrecision), e.g. because
//            of the half pip.
//        */
//        virtual int getDisplayPrecision();
//
//        /** Gets the source unique identifier. */
//        virtual int getSourceID();
//
//        /** Returns a number of the periods in the history. */
//        virtual index_t size();
//
//        virtual void start(index_t start, iterator *iterator);
//
//        virtual double getVolume(index_t index);
//        virtual index_t getPeriodsLimit() const;
//    };
//
//    class TickPriceStorageTickBidAdapter : public ATickPriceStorageTickAdapter
//    {
//     public:
//        TickPriceStorageTickBidAdapter(TickPriceStorage *storage);
//        virtual bool isBid();
//        virtual double getPrice(index_t index);
//        virtual double nextPrice(iterator *iterator);
//    };
//
//    class TickPriceStorageTickAskAdapter : public ATickPriceStorageTickAdapter
//    {
//     public:
//        TickPriceStorageTickAskAdapter(TickPriceStorage *storage);
//        virtual bool isBid();
//        virtual double getPrice(index_t index);
//        virtual double nextPrice(iterator *iterator);
//    };
//};
//
//class INDICORE BarPriceStorage : public TPriceStorage<BarData>
//{
// public:
//    typedef enum
//    {
//        LastTickPrevBar,
//        FirstTickNewBar,
//    }OpenPriceMode;
// protected:
//    std::string mTimeframe;
//    bool mTimeframeKnown;
//    CandlePeriod::Unit mTimeframeUnit;
//    int mTimeframeLength;
//    int mTradingDayOffset;
//    int mTradingWeekOffset;
//    OpenPriceMode mOpenPriceMode;
//    ~BarPriceStorage();
// public:
//    BarPriceStorage(const char *name, const char *instrument, const char *tf, OpenPriceMode mode, int tradingDayOffset, int tradingWeekOffset, int precision, int displayprecision, double pipSize, bool supportsVolume, bool alive, int id, index_t limit, index_t instrumentIndex);
//    virtual bool isTimeframeRecognized();
//    virtual const char *getTimeframe();
//    virtual void addTick(double date, double bid, double ask, double volume = 0);
//    virtual void addBar(double date,  double bidopen, double bidhigh, double bidlow, double bidclose, double askopen, double askhigh, double asklow, double askclose, double volume = 0);
//    virtual void setBar(index_t index, double bidopen, double bidhigh, double bidlow, double bidclose, double askopen, double askhigh, double asklow, double askclose, double volume = 0);
//    bool getBar(index_t index, double &date, double &bidopen, double &bidhigh, double &bidlow, double &bidclose, double &askopen, double &askhigh, double &asklow, double &askclose, double &volume);
//    double date(index_t index);
//    int getSerial(index_t index);
//    double getBidOpen(index_t index);
//    double getBidHigh(index_t index);
//    double getBidLow(index_t index);
//    double getBidClose(index_t index);
//    double getAskOpen(index_t index);
//    double getAskHigh(index_t index);
//    double getAskLow(index_t index);
//    double getAskClose(index_t index);
//    double getVolume(index_t index);
//    virtual IPriceBarStream *getBidPrices();
//    virtual IPriceBarStream *getAskPrices();
//    virtual index_t getPeriodsLimit() const;
//    void remove(index_t count);
//    bool insertBarFirst(double date,  double bidopen, double bidhigh, double bidlow, double bidclose, double askopen, double askhigh, double asklow, double askclose, double volume = 0);
//    DECLARE_ID()
//    DECLARE_ID_MAP()
// protected:
//    BarData *create(double date);
// private:
//    class ABarPriceStorageBarAdapter : public APriceBarStream
//    {
//     protected:
//        BarPriceStorage *mStorage;
//        ~ABarPriceStorageBarAdapter();
//     public:
//        ABarPriceStorageBarAdapter(BarPriceStorage *storage);
//
//        index_t removedFromStart();
//
//        /** Returns the name of the history. */
//        virtual const char *getName();
//
//        /** Returns true in case the history is a bar history. */
//        virtual bool isBar();
//
//        /** Gets timeframe name. */
//        virtual const char *getTimeframe();
//
//        /** Returns true in case the source supports trade volume. */
//        virtual bool supportsVolume();
//
//        /** Returns the number of the first period which has actual data. */
//        virtual index_t getFirstPeriod();
//
//        /** Checks whether data source has data at the specified point. */
//        virtual bool hasData(index_t index);
//
//        /** Returns the date and time at the position. */
//        virtual double date(index_t index);
//
//        /** Get the serial number of the first bar in the collection. */
//        virtual int getSerial(index_t index);
//
//        /** Gets the instrument name. */
//        virtual const char *getInstrument();
//
//        /** Gets the pip size. */
//        virtual double getPipSize();
//
//        /** Checks whether the price source is alive. */
//        virtual bool isAlive();
//
//        /** Gets the precision (number of digits after the decimal point). */
//        virtual int getPrecision();
//
//        /** Gets the precision (number of digits after the decimal point) which should be use
//            for displaying the source values.
//            The display precision can be different with the precision(getPrecision), e.g. because
//            of the half pip.
//        */
//        virtual int getDisplayPrecision();
//
//        /** Gets the source unique identifier. */
//        virtual int getSourceID();
//
//        /** Returns a number of the periods in the history. */
//        virtual index_t size();
//
//        /** Gets the open price of the bar. */
//        virtual double getOpen(index_t index);
//        /** Gets the highest price of the bar. */
//        virtual double getHigh(index_t index);
//        /** Gets the low price of the bar. */
//        virtual double getLow(index_t index);
//        /** Gets the close price of the bar. */
//        virtual double getClose(index_t index);
//        virtual bool getOHLC(index_t index, double &open, double &high, double &low, double &close);
//        virtual bool getHLC(index_t index, double &high, double &low, double &close);
//        virtual bool getHL(index_t index, double &high, double &low);
//        virtual double getVolume(index_t index);
//        virtual void start(index_t start, iterator *iterator);
//
//        virtual double nextOpen(iterator *iterator);
//        virtual double nextHigh(iterator *iterator);
//        virtual double nextLow(iterator *iterator);
//        virtual double nextClose(iterator *iterator);
//        virtual double nextPrice(iterator *iterator);
//        virtual void nextOHLC(iterator *iterator, double &open, double &high, double &low, double &close);
//        virtual void nextHLC(iterator *iterator, double &high, double &low, double &close);
//        virtual void nextHL(iterator *iterator, double &high, double &low);
//        virtual index_t getPeriodsLimit() const;
//     protected:
//        virtual bool getData(index_t, BarData **info, Candle **candle) = 0;
//        virtual void nextData(iterator *iterator, Candle **candle) = 0;
//    };
//
//    class BarPriceStorageBarBidAdapter : public ABarPriceStorageBarAdapter
//    {
//     public:
//        BarPriceStorageBarBidAdapter(BarPriceStorage *storage);
//        virtual bool isBid();
//     protected:
//        virtual bool getData(index_t, BarData **info, Candle **candle);
//        virtual void nextData(iterator *iterator, Candle **candle);
//    };
//
//    class BarPriceStorageBarAskAdapter : public ABarPriceStorageBarAdapter
//    {
//     public:
//        BarPriceStorageBarAskAdapter(BarPriceStorage *storage);
//        virtual bool isBid();
//     protected:
//        virtual bool getData(index_t, BarData **info, Candle **candle);
//        virtual void nextData(iterator *iterator, Candle **candle);
//    };
//
//    friend class BarPriceStorageBarBidAdapter;
//    friend class BarPriceStorageBarAskAdapter;
//};
//
//};

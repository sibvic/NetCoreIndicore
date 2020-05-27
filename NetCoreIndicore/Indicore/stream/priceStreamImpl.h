//TODO: convert
//#pragma once
//
//namespace indicore3
//{
//
//class INDICORE APriceStream : public TAddRefImpl<IPriceStream>
//{
// protected:
//    APriceStream();
//    virtual ~APriceStream();
// public:
//    /** Returns true in case the history is a bar history. */
//    virtual bool isBar();
//    /** Gets timeframe name. */
//    virtual const char *getTimeframe();
//
//    DECLARE_ID_MAP();
//};
//
//
//class INDICORE APriceBarStream : public TAddRefImpl<IPriceBarStream>
//{
// protected:
//    APriceBarStream();
//    virtual ~APriceBarStream();
// public:
//    /** Returns true in case the history is a bar history. */
//    virtual bool isBar();
//    virtual double getPrice(index_t index);
//    DECLARE_ID_MAP();
//};
//
//class INDICORE APriceBarStreamWrapper : public APriceStream
//{
// protected:
//    IPriceBarStream *mParent;
//    std::string mName;
// protected:
//    APriceBarStreamWrapper(IPriceBarStream *parent, const char *name);
//    ~APriceBarStreamWrapper();
// public:
//    /** Returns the name of the history. */
//    virtual const char *getName();
//
//    /** Gets timeframe name. */
//    virtual const char *getTimeframe();
//
//    /** Returns true in case the source supports trade volume. */
//    virtual bool supportsVolume();
//
//    index_t removedFromStart();
//
//    /** Returns the number of the first period which has actual data. */
//    virtual index_t getFirstPeriod();
//
//    /** Checks whether data source has data at the specified point. */
//    virtual bool hasData(index_t index);
//
//    /** Returns the date and time at the position. */
//    virtual double date(index_t index);
//
//    /** Get the serial number of the first bar in the collection. */
//    virtual int getSerial(index_t index);
//
//    /** Gets the instrument name. */
//    virtual const char *getInstrument();
//
//    /** Gets the pip size. */
//    virtual double getPipSize();
//
//    /** Checks whether the price is a bid or ask. */
//    virtual bool isBid() ;
//
//    /** Checks whether the price source is alive. */
//    virtual bool isAlive() ;
//
//    /** Gets the precision (number of digits after the decimal point). */
//    virtual int getPrecision() ;
//
//    /** Gets the precision (number of digits after the decimal point) which should be use
//        for displaying the source values.
//        The display precision can be different with the precision(getPrecision), e.g. because
//        of the half pip.
//    */
//    virtual int getDisplayPrecision() ;
//
//    /** Gets the source unique identifier. */
//    virtual int getSourceID() ;
//
//    /** Returns a number of the periods in the history. */
//    virtual index_t size() ;
//
//    void start(index_t from, IPriceStream::iterator *iter);
//
//    virtual double getVolume(index_t index);
//    virtual index_t getPeriodsLimit() const;
//    virtual IPriceBarStream *getSource();
//    DECLARE_ID()
//    DECLARE_ID_MAP()
//};
//
//class INDICORE PriceBarStreamWrapperOpenPrice : public APriceBarStreamWrapper
//{
// public:
//    PriceBarStreamWrapperOpenPrice(IPriceBarStream *parent);
//    virtual double getPrice(index_t index);
//    virtual double nextPrice(IPriceStream::iterator *iter);
//};
//
//class INDICORE PriceBarStreamWrapperHighPrice : public APriceBarStreamWrapper
//{
// public:
//    PriceBarStreamWrapperHighPrice(IPriceBarStream *parent);
//    virtual double getPrice(index_t index);
//    virtual double nextPrice(IPriceStream::iterator *iter);
//};
//
//class INDICORE PriceBarStreamWrapperLowPrice : public APriceBarStreamWrapper
//{
// public:
//    PriceBarStreamWrapperLowPrice(IPriceBarStream *parent);
//    virtual double getPrice(index_t index);
//    virtual double nextPrice(IPriceStream::iterator *iter);
//};
//
//class INDICORE PriceBarStreamWrapperClosePrice : public APriceBarStreamWrapper
//{
// public:
//    PriceBarStreamWrapperClosePrice(IPriceBarStream *parent);
//    virtual double getPrice(index_t index);
//    virtual double nextPrice(IPriceStream::iterator *iter);
//};
//
//class INDICORE PriceBarStreamWrapperVolume : public APriceBarStreamWrapper
//{
// public:
//    PriceBarStreamWrapperVolume(IPriceBarStream *parent);
//    virtual bool supportsVolume();
//    virtual double getPrice(index_t index);
//    void start(index_t from, IPriceStream::iterator *iter);
//    virtual double nextPrice(IPriceStream::iterator *iter);
//};
//
//class INDICORE PriceBarStreamWrapperMedianPrice : public APriceBarStreamWrapper
//{
// public:
//    PriceBarStreamWrapperMedianPrice(IPriceBarStream *parent);
//    virtual double getPrice(index_t index);
//    virtual double nextPrice(IPriceStream::iterator *iter);
//};
//
//class INDICORE PriceBarStreamWrapperTypicalPrice : public APriceBarStreamWrapper
//{
// public:
//    PriceBarStreamWrapperTypicalPrice(IPriceBarStream *parent);
//    virtual double getPrice(index_t index);
//    virtual double nextPrice(IPriceStream::iterator *iter);
//};
//
//class INDICORE PriceBarStreamWrapperWeightedPrice : public APriceBarStreamWrapper
//{
// public:
//    PriceBarStreamWrapperWeightedPrice(IPriceBarStream *parent);
//    virtual double getPrice(index_t index);
//    virtual double nextPrice(IPriceStream::iterator *iter);
//};
//
//
//
//
//}
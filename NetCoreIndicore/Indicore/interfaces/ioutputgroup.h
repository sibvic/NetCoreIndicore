//TODO: convert
//#pragma once
//
//namespace indicore3
//{
//
//class INDICORE IOutputGroup : public IObject
//{
// protected:
//    IOutputGroup();
// public:
//    enum Type
//    {
//        //channel, 2 streams
//        Channel = 1,
//        //from/to bar, 2 streams
//        FromToBar = 2,
//        //candle bar: 4 streams
//        Candle = 3,
//    };
//
//    /** Get group label. */
//    virtual const char *getLabel() = 0;
//
//    /** Get group id. */
//    virtual const char *getID() = 0;
//
//    /** Get group type. */
//    virtual Type getType() = 0;
//
//    static const GUID ID;
//};
//
//class IOutputStream;
//class IPriceBarStream;
//
//class INDICORE IOutputGroupChannel : public IOutputGroup
//{
// protected:
//    IOutputGroupChannel();
// public:
//    /** Get first stream. */
//    virtual IOutputStream* getFirstStream() = 0;
//    /** Get second stream. */
//    virtual IOutputStream* getSecondStream() = 0;
//    /** Get interior fill color. */
//    virtual int getFillColor() = 0;
//    /** Get interior fill alpha-factor (0..100) in percents */
//    virtual int getAlphaFactor() = 0;
//
//    enum FillStyle
//    {
//        StartToEnd,
//        EndToEnd,
//    };
//
//    /** Get fill style.
//
//        true    - fill start-end
//        false   - fill middle-middle
//      */
//    virtual FillStyle getFillStyle() = 0;
//
//    static const GUID ID;
//};
//
//class INDICORE IOutputGroupFromToBar : public IOutputGroup
//{
// protected:
//    IOutputGroupFromToBar();
// public:
//    /** Get first stream. */
//    virtual IOutputStream* getFirstStream() = 0;
//    /** Get second stream. */
//    virtual IOutputStream* getSecondStream() = 0;
//    /** Get interior fill color. */
//    virtual int getFillColor() = 0;
//
//    static const GUID ID;
//};
//
//class INDICORE IOutputGroupCandle : public IOutputGroup
//{
// protected:
//    IOutputGroupCandle();
// public:
//    /** Get open price stream. */
//    virtual IOutputStream* getOpenStream() = 0;
//    /** Get close price stream. */
//    virtual IOutputStream* getCloseStream() = 0;
//    /** Get high price stream. */
//    virtual IOutputStream* getHighStream() = 0;
//    /** Get low price stream. */
//    virtual IOutputStream* getLowStream() = 0;
//    /** Checks whether the volume stream exists. */
//    virtual bool hasVolumeStream() = 0;
//    /** Get volume stream. */
//    virtual IOutputStream* getVolumeStream() = 0;
//    /** Get bar size. */
//    virtual const char *getBarSize() = 0;
//    /** Get default view - true is bar, false - show candle. */
//    virtual bool isBar() = 0;
//    virtual IPriceBarStream *getBarStream() = 0;
//
//    static const GUID ID;
//};
//
//
//}
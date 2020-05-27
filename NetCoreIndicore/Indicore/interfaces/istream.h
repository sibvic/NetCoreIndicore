//TODO: convert
//#pragma once
//
//namespace indicore3
//{
//
//class INDICORE IPriceStream : public IObject
//{
// protected:
//    IPriceStream();
// public:
//    /** Returns the name of the history. */
//    virtual const char *getName() = 0;
//
//    /** Returns true in case the history is a bar history. */
//    virtual bool isBar() = 0;
//
//    /** Gets timeframe name. */
//    virtual const char *getTimeframe() = 0;
//
//    /** Returns true in case the source supports trade volume. */
//    virtual bool supportsVolume() = 0;
//
//    /** Returns the number of the elements removed from the beginning of the collection since it creation. */
//    virtual index_t removedFromStart() = 0;
//
//    /** Returns the number of the first period which has actual data. */
//    virtual index_t getFirstPeriod() = 0;
//
//    /** Checks whether data source has data at the specified point. */
//    virtual bool hasData(index_t index) = 0;
//
//    /** Returns the date and time at the position. */
//    virtual double date(index_t index) = 0;
//
//    /** Get the serial number of the bar in the collection. */
//    virtual int getSerial(index_t index) = 0;
//
//    /** Gets the instrument name. */
//    virtual const char *getInstrument() = 0;
//
//    /** Gets the pip size. */
//    virtual double getPipSize() = 0;
//
//    /** Checks whether the price is a bid or ask. */
//    virtual bool isBid() = 0;
//
//    /** Checks whether the price source is alive. */
//    virtual bool isAlive() = 0;
//
//    /** Gets the precision (number of digits after the decimal point). */
//    virtual int getPrecision() = 0;
//
//    /** Gets the precision (number of digits after the decimal point) which should be use
//        for displaying the source values.
//        The display precision can be different with the precision(getPrecision), e.g. because
//        of the half pip.
//    */
//    virtual int getDisplayPrecision() = 0;
//
//    /** Gets the source unique identifier. */
//    virtual int getSourceID() = 0;
//
//    /** Returns a number of the periods in the history. */
//    virtual index_t size() = 0;
//
//    virtual double getPrice(index_t index) = 0;
//
//    virtual double getVolume(index_t index) = 0;
//
//    virtual index_t getPeriodsLimit() const = 0;
//
//    typedef struct
//    {
//        void *p1;
//        void *p2;
//        void *p4;
//        unsigned int p3;
//    }iterator;
//
//    //TBD!!! make it virtual as soon as all implementations will support it
//    virtual void start(index_t start, iterator *iterator);
//    virtual double nextPrice(iterator *iterator);
//                                             /** Unique identifier of the interface. */
//    static const GUID ID;
//};
//
//
//class INDICORE IPriceBarStream : public IPriceStream
//{
// protected:
//    IPriceBarStream();
// public:
//
//    /** Gets the open price of the bar. */
//    virtual double getOpen(index_t index) = 0;
//    /** Gets the highest price of the bar. */
//    virtual double getHigh(index_t index) = 0;
//    /** Gets the low price of the bar. */
//    virtual double getLow(index_t index) = 0;
//    /** Gets the close price of the bar. */
//    virtual double getClose(index_t index) = 0;
//    virtual bool getOHLC(index_t index, double &open, double &high, double &low, double &close) = 0;
//    virtual bool getHLC(index_t index, double &high, double &low, double &close) = 0;
//    virtual bool getHL(index_t index, double &high, double &low) = 0;
//
//    virtual double nextOpen(iterator *iterator);
//    virtual double nextHigh(iterator *iterator);
//    virtual double nextLow(iterator *iterator);
//    virtual double nextClose(iterator *iterator);
//    virtual void nextOHLC(iterator *iterator, double &open, double &high, double &low, double &close);
//    virtual void nextHLC(iterator *iterator, double &high, double &low, double &close);
//    virtual void nextHL(iterator *iterator, double &high, double &low);
//
//    /** Unique identifier of the interface. */
//    static const GUID ID;
//};
//
//class INDICORE IOutputStream : public IPriceStream
//{
// protected:
//    IOutputStream();
// public:
//    /** The type of the indicator output stream. */
//    enum OutputType
//    {
//        Internal = 0,
//        Dot = 1,
//        Bar = 2,
//        Line = 3,
//    };
//
//    enum LineStyle
//    {
//        LineNone = 0,
//        LineSolid = 1,      //default
//        LineDash = 2,
//        LineDot = 3,
//        LineDashDot = 4,
//        LineDashDotDot = 5,
//        LineMax = 6,
//    };
//
//    /** Gets the type of the stream. */
//    virtual OutputType getType() = 0;
//
//    /** Gets the unique (within all streams) identifier of the stream. */
//    virtual const char *getID() = 0;
//
//    /** Gets the color of the line (an RGB quad). */
//    virtual int getColor() = 0;
//
//    /** Gets the label of the stream. */
//    virtual const char *getLabel() = 0;
//
//    /** Get extent of the stream. */
//    virtual int getExtent() = 0;
//
//    /** Get number of levels. */
//    virtual index_t getLevelsCount() = 0;
//
//    /** Get the level. */
//    virtual double getLevel(index_t index) = 0;
//
//    /** Checks whether output stream is in the group. */
//    virtual bool isInGroup() = 0;
//
//    /** Get line style. */
//    virtual LineStyle getLineStyle() = 0;
//
//    /** Get line width. */
//    virtual int getLineWidth() = 0;
//
//    /** Get level line style. */
//    virtual LineStyle getLevelLineStyle(index_t index) = 0;
//
//    /** Get level line width. */
//    virtual int getLevelLineWidth(index_t index) = 0;
//
//    /** Get level line color. */
//    virtual int getLevelLineColor(index_t index) = 0;
//
//    /** Get color for the line at the specified bar. */
//    virtual int getColor(index_t index) = 0;
//
//    /** Check whether the line has colors customized per bars. */
//    virtual bool hasPerBarColors() = 0;
//
//    /** Get color for the line at the specified bar. */
//    virtual bool getBreak(index_t index) = 0;
//
//    /** Checks whether the output stream shall be drawn. */
//    virtual bool isVisible() = 0;
//
//    virtual void setStyle(IOutputStream::LineStyle style) = 0;
//
//    virtual void setWidth(int width) = 0;
//
//    virtual void setColor(int color) = 0;
//
//    static const GUID ID;
//};
//
//class INDICORE IOutputStreamImpl : public IOutputStream
//{
// protected:
//    IOutputStreamImpl();
// public:
//    /** Set data at the specified position. */
//    virtual void setPrice(index_t index, double data) = 0;
//
//    /** Set data at the specified position. */
//    virtual void setNoData(index_t index) = 0;
//
//    virtual void setPrecision(int precision) = 0;
//
//    /** Set data at the specified position. */
//    virtual void setColorI(index_t index, int color) = 0;
//
//    virtual void addLevel(double level, IOutputStream::LineStyle style, int width, int color) = 0;
//
//    virtual void setBookmark(index_t bookmark, index_t bar) = 0;
//
//    virtual index_t getBookmark(index_t bookmark) = 0;
//
//    virtual void setVisible(bool visible) = 0;
//
//    virtual void setBreak(index_t index, bool brk) = 0;
//
//    static const GUID ID;
//};
//
///** The interface to the indicator output for labels. */
//class INDICORE ITextOutput : public IObject
//{
// protected:
//    ITextOutput();
// public:
//    enum HorizontalAlignment
//    {
//        Left = 1,
//        HCenter = 2,
//        Right = 3,
//    };
//    enum VerticalAlignment
//    {
//        Top = 1,
//        VCenter = 2,
//        Bottom = 3,
//    };
//
//    /** Get label. */
//    virtual const char *getLabel() = 0;
//    /** Get id. */
//    virtual const char *getId() = 0;
//    /** Get horizontal alignment against the price. */
//    virtual HorizontalAlignment getHorizontalAlignment() = 0;
//    /** Get horizontal alignment against the price. */
//    virtual VerticalAlignment getVerticalAlignment() = 0;
//    /** Get font name for the labels. */
//    virtual const char *getFontName() = 0;
//    /** Get font size in points for the labels. */
//    virtual const int getFontSize() = 0;
//    /** Returns a number of the periods in the history. */
//    virtual index_t size() = 0;
//    /** Get extent of the stream. */
//    virtual int getExtent() = 0;
//    /** Checks whether data source has data at the specified point. */
//    virtual bool hasData(index_t index) = 0;
//    /** Gets the price level. */
//    virtual double getPrice(index_t index) = 0;
//    /** Get the label. */
//    virtual const char *getLabel(index_t index) = 0;
//    /** Get the tip. */
//    virtual const char *getTip(index_t index) = 0;
//    /** Check whether the tip exists. */
//    virtual bool hasTip(index_t index) = 0;
//    /** Get label color. */
//    virtual int getColor() = 0;
//    /** Get label color for the specified bar. */
//    virtual int getColor(index_t index) = 0;
//    /** Set parameters. */
//    virtual void setFont(const char *faceName, int size) = 0;
//    virtual void setColor(int color) = 0;
//    static const GUID ID;
//};
//
//class INDICORE ITextOutputImpl : public ITextOutput
//{
// protected:
//    ITextOutputImpl();
// public:
//    virtual void setNoData(index_t index) = 0;
//    virtual void set(index_t index, double level, const char *text, const char *tooltip, int color) = 0;
//    static const GUID ID;
//};
//
//};
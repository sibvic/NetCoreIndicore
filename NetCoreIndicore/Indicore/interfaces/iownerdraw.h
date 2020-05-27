//TODO: convert
//#pragma once
//
//#ifndef WIN32
//typedef struct tagPOINT {
//    LONG x;
//    LONG y;
//} POINT, *PPOINT;
//#endif
//
//namespace indicore3
//{
//
//class IFileAccessor;
//
//class INDICORE IOwnerDrawnPoints : public IObject
//{
// protected:
//    IOwnerDrawnPoints();
// public:
//    virtual index_t size() = 0;
//    virtual void get(index_t index, int *x, int *y) = 0;
//    virtual void copyTo(POINT *points) = 0;
//    virtual void add(int x, int y) = 0;
//    virtual void set(index_t index, int x, int y) = 0;
//    virtual void allocate(index_t n) = 0;
//    static const GUID ID;
//};
//
//class INDICORE IOwnerDrawnContext : public IObjectNoRef
//{
// protected:
//    IOwnerDrawnContext();
// public:
//    enum Stage
//    {
//        NotPainting = -1,
//        IndicatorAreaAfterGrid = 0,
//        IndicatorAreaBeforeOutputs = 1,
//        IndicatorAreaAfterOutputs = 2,
//        MainAreaAfterGrid = 100,
//        MainAreaBeforeOutputs = 101,
//        MainAreaAfterOutputs = 102,
//    };
//
//    /** Canvas information. */
//    virtual int getTop() = 0;
//    virtual int getLeft() = 0;
//    virtual int getBottom() = 0;
//    virtual int getRight() = 0;
//
//    /** Visible chart area information. */
//    virtual int getFirstBar() = 0;
//    virtual int getLastBar() = 0;
//    virtual double getMinPrice() = 0;
//    virtual double getMaxPrice() = 0;
//
//    /** Drawing procedure and information. */
//    virtual void startBarEnumeration() = 0;
//    virtual bool nextBar(int *index, int *x1, int *x2, int *x, int *c1, int *c2) = 0;
//    virtual int indexOfBar(int x) = 0;
//    virtual int positionOfBar(int index, int *s, int *e) = 0;
//    virtual int positionOfDate(double date, int *s, int *e) = 0;
//    virtual double priceOfPoint(int y) = 0;
//    virtual bool pointOfPrice(double price, int *y) = 0;
//    virtual int priceWidth(double priceFrom, double priceTo) = 0;
//
//    /** Drawing objects. */
//    virtual void deleteObject(int objid) = 0;
//    virtual void createPen(int objid, int style, int width, int color) = 0;
//    virtual void createSolidBrush(int objid, int color) = 0;
//    virtual void createHatchBrush(int objid, int style, int color) = 0;
//    virtual bool createFont(int objid, const char *face, int width, int height, bool bold, bool italic, bool underline, bool strike) = 0;
//    virtual bool loadPicture(int objid, IFileAccessor *accessor, const char *id) = 0;
//    virtual bool loadIcon(int objid, IFileAccessor *accessor, const char *id) = 0;
//    virtual int pointsToPixels(double points) = 0;
//    virtual double pixelsToPoints(int points) = 0;
//
//    /** Drawing methods. */
//
//    //pen == -1 -> null pen
//    //brush == -1 -> hollow brush
//    //font == -1 -> default system font
//    //color == -1 -> hollow(transparent) color
//
//    virtual void setPixel(int x, int y, int color, int transparency) = 0;
//    virtual void drawLine(int pen, int x1, int y1, int x2, int y2, int transparency) = 0;
//    virtual void drawRectangle(int pen, int brush, int x1, int y1, int x2, int y2, int transparency) = 0;
//    virtual void drawEllipse(int pen, int brush, int x1, int y1, int x2, int y2, int transparency) = 0;
//    virtual void drawArc(int pen, int brush, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int transparency) = 0;
//    virtual void measureText(int objid, const char *text, int alignment, int *width, int *height) = 0;
//    /** Draw text
//    
//        @param  collisionStrategy   0 - draw always
//                                    1 - draw when no collisions detected
//    */
//    virtual void drawText(int objid, const char *text, int color, int bkcolor, int x1, int y1, int x2, int y2, int alignment, int transparency, double angle, int rotatePoint, int collisionStrategy) = 0;
//    virtual void drawPicture(int objid, int x1, int y1, int transparency) = 0;
//    virtual void drawPicture(int objid, int x1, int y1, int bgcolor, int transparency) = 0;
//    virtual void drawIcon(int objid, int x1, int y1, int transparency) = 0;
//    virtual void drawPolyline(int pen, IOwnerDrawnPoints *points, int transparency) = 0;
//    virtual void drawPolygon(int pen, int brush, IOwnerDrawnPoints *points, int transparency) = 0;
//    virtual void drawGradientRectangle(int x1, int y1, int color1, int x2, int y2, int color2, int x3, int y3, int color3,  int x4, int y4, int color4, int transparency) = 0;
//    virtual void drawGradientTriangle(int x1, int y1, int color1, int x2, int y2, int color2, int x3, int y3, int color3, int transparency) = 0;
//    virtual void drawBezierLine(int pen, IOwnerDrawnPoints *points, int transparency) = 0;
//    virtual void drawBezierShape(int pen, int brush, IOwnerDrawnPoints *points, int transparency) = 0;
//    virtual void setClipRectangle(int left, int top, int right, int bottom) = 0;
//    virtual void resetClipRectangle() = 0;
//    virtual void tooltip(int x1, int y1, int x2, int y2, const char *text) = 0;
//
//    static const GUID ID;
//};
//
//}

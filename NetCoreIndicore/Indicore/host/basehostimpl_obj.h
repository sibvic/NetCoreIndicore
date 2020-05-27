//TODO: convert
//#pragma once
//
//#ifndef WIN32
//typedef void *HFONT;
//#endif
//
//namespace indicore3
//{
//
//class INDICORE HostLine
//{
//    friend class BaseHostImpl;
//  private:
//    int Id;
//  public:
//    double DateFrom;
//    double LevelFrom;
//    double DateTo;
//    double LevelTo;
//    int Color;
//    IOutputStream::LineStyle Style;
//    int Width;
//    std::string Tooltip;
//    HostLine(int id, double dateFrom, double levelFrom, double dateTo, double levelTo, int color, IOutputStream::LineStyle style, int width, const char* tooltip);
//};
//
//#define TZ_EST      1       //EST time zone
//#define TZ_GMT      2       //GMT time zone
//#define TZ_LOC      3       //local time zone
//#define TZ_DISP     4       //display time zone
//#define TZ_SERV     5       //server time zone
//#define TZ_FINANCIAL 6      //financial time zone
//
//#define CR_TYPE_CHART         0
//#define CR_TYPE_TOP           1
//#define CR_TYPE_BOTTOM        2
//#define CR_TYPE_LEFT          1
//#define CR_TYPE_RIGHT         2
//#define CR_TYPE_CENTER        3
//
//class INDICORE HostLabel
//{
//    friend class BaseHostImpl;
//  private:
//    int Id;
//  public:
//    double x;
//    int xType;
//    double y;
//    int yType;
//    std::string Text;
//    HFONT font;
//    int color;
//    ITextOutput::VerticalAlignment valign;
//    ITextOutput::HorizontalAlignment halign;
//    HostLabel(int id, double _x, int _xType, double _y, int _yType, ITextOutput::HorizontalAlignment _halign, ITextOutput::VerticalAlignment  _valign, HFONT _font, int _color, const char *text);
//};
//
//class INDICORE InstanceObjectCollection
//{
//    friend class BaseHostImpl;
// private:
//    IObjectNoRef *mInstance;
//    std::vector<HostLine *> *mLines;
//    std::vector<HostLabel *> *mLabels;
// public:
//    InstanceObjectCollection(IObjectNoRef *instance);
//    virtual ~InstanceObjectCollection();
//
//    index_t getLineCount();
//    const HostLine *getLine(index_t index);
//    index_t getLabelCount();
//    const HostLabel *getLabel(index_t index);
//};
//
//}
//
//#ifdef WIN32
//int CALLBACK EnumFontProc(LOGFONT *lf, TEXTMETRIC *tm, DWORD type, LPARAM data);
//HFONT createFont(const char *lpFaceName, int ptSize, bool italic, bool bold);
//#endif

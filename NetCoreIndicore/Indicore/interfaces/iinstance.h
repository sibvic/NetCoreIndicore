//TODO: convert
//#pragma once
//
//namespace indicore3
//{
//
//class INDICORE IInstance : public IExecutable
//{
// protected:
//    IInstance();
// public:
//
//    virtual IProfile *getProfile() = 0;
//
//    virtual IPermissions *getPermissions() = 0;
//
//    virtual IHost *getHost() = 0;
//
//    enum NotifyFinishedResult
//    {
//        DoNothing = 0,
//        AsyncRedraw,
//        Error,
//    };
//
//    /** Notify that asynchronous operation has been finished (new version)
//
//        @return a set of flags
//        @param cookie       the cookie
//        @param error        the error if error occurred
//        @param fmt          the format string, each character means 1 argument:
//                            I   integer (_int32)
//                            D   double  (double)
//                            S   string  (const char *)
//                            B   boolean (bool)
//                            C   object (IObjecxtNoRef *) [shall be recognizable by called environment, will be released when isn't needed anymore]
//
//        The first two arguments are strongly recommended to be bool and const char * in order to keep
//        compatiblity with notifyFinished implementation in indicore 1.0
//      */
//    virtual NotifyFinishedResult notifyFinished(int cookie, IError **pperor, const char *fmt, ...) = 0;
//
//    virtual bool isReadyToRelease() = 0;
//
//    virtual NotifyFinishedResult notifyFinished(int cookie, IValueMap *vmap, IError **pperor) = 0;
//
//    static const GUID ID;
//};
//
//class INDICORE IIndicatorInstance : public IInstance
//{
// protected:
//    IIndicatorInstance();
// public:
//    /** Gets name of the indicator instance. */
//    virtual const char *getName() = 0;
//
//    /** Get parameters used to create. */
//    virtual IParameters *getParameters() = 0;
//
//    /** Get instance's source. */
//    virtual IPriceStream *getSource() = 0;
//
//    /** Get number of output streams. */
//    virtual index_t getStreamCount() = 0;
//
//    /** Get output stream. */
//    virtual IOutputStream *getStream(index_t index) = 0;
//
//    /** Get number of text outputs. */
//    virtual index_t getTextOutputCount() = 0;
//
//    /** Get text output. */
//    virtual ITextOutput *getTextOutput(index_t index) = 0;
//
//    virtual index_t getOutputGroupCount() = 0;
//
//    virtual IOutputGroup *getOutputGroup(index_t index) = 0;
//
//    virtual bool isDrawOnMainChart() = 0;
//
//    virtual int getLabelColor() = 0;
//
//    /** Get the latest updated period. */
//    virtual int getLastUpdate() = 0;
//
//    virtual bool prepare(bool onlyName, IError **pperror) = 0;
//
//    /** Forces update of the indicator instance.
//
//        @param refreshLast  specify true to refresh the last already calculated period.
//      */
//    virtual bool update(bool refreshLast, IError **pperror) = 0;
//
//
//    /** Forces recalc of the whole the indicator. */
//    virtual bool updateAll(IError **pperror) = 0;
//
//    virtual bool isOwnerDrawn() = 0;
//
//    virtual bool draw(IOwnerDrawnContext::Stage stage, IOwnerDrawnContext *context, IError **error) = 0;
//
//
//    static const GUID ID;
//};
//
//class INDICORE IIndicatorInstanceCallback : public IIndicatorInstance
//{
// protected:
//    IIndicatorInstanceCallback();
// public:
//    virtual IOutputStreamImpl *createInternalStream(int first, int extent) = 0;
//    virtual IOutputStreamImpl *createOutputStream(const char *id, IOutputStream::OutputType, const char *name, const char *label, int color, int first, int extent) = 0;
//    virtual IOutputStream *createCopyStream(const char *id, const char *name, const char *label, int color, IOutputStream::LineStyle style, int lineWidth, IOutputStream *source, int hoffset, double voffset, bool voffsetRelative, bool offsetLevels) = 0;
//    virtual ITextOutputImpl *createTextOutput(const char *id, const char *label, const char *font, int fontSize, ITextOutput::HorizontalAlignment halign, ITextOutput::VerticalAlignment valign, int color, int extent) = 0;
//    virtual bool createChannelGroup(const char *id, const char *label, IOutputStream *first, IOutputStream *second, int color, int alpha, IOutputGroupChannel::FillStyle mode) = 0;
//    virtual bool createFromToBarGroup(const char *id, const char *label, IOutputStream *first, IOutputStream *second, int color) = 0;
//    virtual bool createCandleGroup(const char *id, const char *label, IOutputStream *open, IOutputStream *high, IOutputStream *low, IOutputStream *close, IOutputStream *volume, const char *bar, bool isBar) = 0;
//
//    virtual void setDrawOnMainChart(bool flag) = 0;
//    virtual void setOwnerDrawn(bool flag) = 0;
//    virtual void setLabelColor(int color) = 0;
//
//    virtual void initView(const char *instrument, int precision, double pointSize, bool isBid, bool isAlive) = 0;
//    virtual void addViewBar(double date) = 0;
//    virtual void setName(const char *) = 0;
//
//    /** Forces update of the indicator instance.
//
//        @param refreshLast  specify true to refresh the last already calculated period.
//      */
//    virtual bool updateFrom(int period, IError **pperror) = 0;
//    static const GUID ID;
//};
//
//class INDICORE IIndicatorInstanceImplementation : public IExecutable
//{
// protected:
//    IIndicatorInstanceImplementation();
// public:
//    enum UpdateType
//    {
//        UpdateLast = 0,
//        UpdateNew,
//        UpdateAll,
//    };
//
//    virtual bool init(IIndicatorInstanceCallback *callback, IError **pperror) = 0;
//    virtual bool prepare(bool onlyName, IError **pperror) = 0;
//    virtual bool update(int period, IIndicatorInstanceImplementation::UpdateType type, IError **pperror) = 0;
//    virtual IInstance::NotifyFinishedResult notifyFinished(int cookie, IValueMap *vmap, IError **pperor) = 0;
//    virtual bool releaseInstance(IError **pperror) = 0;
//    virtual bool draw(IOwnerDrawnContext::Stage stage, IOwnerDrawnContext *context, IError **pperor) = 0;
//    static const GUID ID;
//};
//
//class INDICORE IStrategyInstance : public IInstance
//{
// protected:
//    IStrategyInstance();
// public:
//    /** Gets name of the indicator instance. */
//    virtual const char *getName() = 0;
//
//    /** Get parameters used to create. */
//    virtual IParameters *getParameters() = 0;
//
//    virtual bool prepare(bool onlyName, IError **pperror) = 0;
//
//    virtual bool update(IError **pperror) = 0;
//
//    /** Checks whether the parameters can be changed "on the fly" */
//    virtual bool canChangeParameters() = 0;
//
//    /** Check the parameters before replacing them on the fly.
//
//        @return true in case the function did not return an error (i.e. check successfully),
//                false in case the function returns error (i.e. parameters aren't good).
//
//        @param params       New set of the parameters
//        @param msg          [output] The new name of the instance (retcode == true)
//                                     or
//                                     Error (retcode == false)
//
//      */
//    virtual bool checkParameters(IParameters *params, char *newName, index_t newNameMax, IError **error) = 0;
//    /** Change the parameters and notify a strategy about the change.
//
//        @param params       New set of the parameters
//        @param error        [output] The error
//      */
//    virtual bool changeParameters(IParameters *params, IError **error) = 0;
//
//    static const GUID ID;
//};
//
//class INDICORE IStrategyInstanceCallback : public IStrategyInstance
//{
// protected:
//    IStrategyInstanceCallback();
// public:
//    virtual void setName(const char *name) = 0;
//    virtual IPriceStream *getBid() = 0;
//    virtual IPriceStream *getAsk() = 0;
//    static const GUID ID;
//};
//
//class INDICORE IStrategyInstanceImplementation : public IExecutable
//{
// protected:
//    IStrategyInstanceImplementation();
// public:
//    virtual bool init(IStrategyInstanceCallback *callback, IError **pperror) = 0;
//    virtual bool prepare(bool onlyName, IError **pperror) = 0;
//    virtual bool update(IError **pperror) = 0;
//    virtual IInstance::NotifyFinishedResult notifyFinished(int cookie, IValueMap *vmap, IError **pperor) = 0;
//    virtual bool releaseInstance(IError **pperror) = 0;
//    virtual bool canChangeParameters() = 0;
//    virtual bool checkParameters(IParameters *params, char *newName, index_t newNameMax, IError **error) = 0;
//    virtual bool changeParameters(IParameters *params, IError **error) = 0;
//    static const GUID ID;
//};
//
//}

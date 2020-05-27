//TODO: convert
//#pragma once
//
//namespace indicore3
//{
//
////pre-referenced color values
//#define COLOR_LABEL_ID          -1
//#define COLOR_LINE_ID           -2
//#define COLOR_UPCANDLE_ID       -3
//#define COLOR_DOWNCANDLE_ID     -4
//#define COLOR_CUSTOMLEVEL_ID    -5
//#define COLOR_BACKGROUND_ID     -6
//
///** The value of the parameter. */
//class INDICORE IParameterConstant
//{
// protected:
//    IParameterConstant();
// public:
//    virtual ~IParameterConstant();
//
//    /** The type of the parameter value. */
//    enum Type
//    {
//#ifndef INDICORE_IOS_DISALLOW_NIL
//        Nil = 0,
//#else
//        Null = 0,
//#endif
//        Boolean = 1,
//        Integer,
//        Double,
//        String,
//        Color,
//        Date,           //date and time (double value)
//        File,           //file name (string value)
//        Object,         //object value (should be IObject or IObjectNoRef)
//    };
//
//    /** Gets type of the value. */
//    virtual Type getType() const = 0;
//
//    /** Gets the boolean value of the parameter. */
//    virtual bool getBoolean() const = 0;
//
//    /** Gets the integer value of the parameter. */
//    virtual int getInteger() const = 0;
//
//    /** Gets the double value of the parameter. */
//    virtual double getDouble() const = 0;
//
//    /** Gets the double value of the parameter. */
//    virtual double getDate() const = 0;
//
//    /** Gets the string value of the parameter. */
//    virtual const char *getString() const = 0;
//
//    /** Gets the string value of the parameter. */
//    virtual const char *getFile() const = 0;
//
//    /** Gets the color value of the parameter. */
//    virtual int getColor() const = 0;
//
//    /** Checks whether the value is not assigned yet. */
//    virtual bool isNil() const = 0;
//
//    /** Compares the value to other value. */
//    virtual int CompareTo(const IParameterConstant *other) const = 0;
//
//    virtual IObjectNoRef *getObject() const  = 0;
//
//    virtual bool getObject(GUID id, void **ppv) const = 0;
//};
//
///** The value of the parameter. */
//class INDICORE IParameterValue : public IParameterConstant
//{
// protected:
//    IParameterValue();
//    virtual ~IParameterValue();
// public:
//    /** Sets the boolean value of the parameter. */
//    virtual void setBoolean(bool value) = 0;
//
//    /** Sets the integer value of the parameter. */
//    virtual void setInteger(int value) = 0;
//
//    /** Sets the double value of the parameter. */
//    virtual void setDouble(double value) = 0;
//
//    /** Sets the date value of the parameter. */
//    virtual void setDate(double value) = 0;
//
//    /** Sets the string value of the parameter. */
//    virtual void setString(const char *value) = 0;
//
//    /** Sets the string value of the parameter. */
//    virtual void setFile(const char *value) = 0;
//
//    /** Sets the integer value of the parameter. */
//    virtual void setColor(int value) = 0;
//
//    /** Sets the other value. */
//    virtual void set(const IParameterConstant *value) = 0;
//
//    virtual void setObject(IObjectNoRef *object) = 0;
//
//    virtual void setNil() = 0;
//};
//
//class IParameters;
//class IParameterAlternatives;
//
//class INDICORE IParameter
//{
// protected:
//    IParameter();
//    virtual ~IParameter();
// public:
//    /** Gets required parameter type. */
//    virtual IParameterConstant::Type getType() const = 0;
//
//    /** Gets the unique identifier of the parameter. */
//    virtual const char *getID() const = 0;
//
//    /** Gets the readable name of the parameter. */
//    virtual const char *getName() const = 0;
//
//    /** Gets the description of the parameter. */
//    virtual const char *getDescription() const = 0;
//
//    /** Gets the instance of the value. */
//    virtual IParameterValue *value() = 0;
//
//    /** Gets the instance of the value. */
//    virtual const IParameterConstant *valueConst() const = 0;
//
//
//    /** Gets default value. */
//    virtual const IParameterConstant *defaultValue() const = 0;
//
//    /** Gets minimal value. */
//    virtual const IParameterConstant *minimalValue() const = 0;
//
//    /** Gets maximal value. */
//    virtual const IParameterConstant *maximalValue() const = 0;
//
//    virtual bool hasAlternatives() const = 0;
//
//    /** Get alternatives (for the parameters to be chosen from the list. */
//    virtual  IParameterAlternatives *getAlternatives() const = 0;
//
//    //parameter behavior flag
//    enum Flag
//    {
//        eNoFlag = 0,
//        //string flags
//        eStringInstrumentList = 1,
//        eStringPeriodList,
//        eStringIndicator,
//        eStringStragegy,
//        eStringEmail,
//        eStringAccount,
//        eStringOrderId,
//        eStringTradeId,
//        eStringIndicator_IndicatorsOnly,
//        eStringIndicator_OsicllatorsOnly,
//        eStringPeriodListWithEdit,
//        eStringPeriodListBarsOnly,
//        eStringPeriodListBarsOnlyWithEdit,
//        //integer flags
//        eIntLineStyle = 101,
//        eIntLevelStyle,
//        //data flags
//        eDateDate = 201,
//        eDateDateTime,
//        eDateDateOrNull,
//        eDateDateTimeOrNull,
//        //file flags
//        eFileSound = 301,
//        //number flag
//        eDoublePrice = 401,
//        //boolean flag
//        eBoolBidAsk = 501,
//        eBoolAllowTrade,
//    };
//
//    /** Get parameter flag. */
//    virtual Flag getFlag() const = 0;
//
//    virtual bool hasParameters() const = 0;
//
//    /** Get associated parameters. */
//    virtual IParameters *getParameters() const = 0;
//
//    /** Set associated parameters. */
//    virtual void setParameters(IParameters *pParameters) = 0;
//};
//
//class INDICORE IParameterAlternative
//{
// protected:
//    IParameterAlternative();
//    virtual ~IParameterAlternative();
// public:
//    /** Gets the unique identifier of the parameter. */
//    virtual const char *getID() const = 0;
//
//    /** Gets the readable name of the parameter. */
//    virtual const char *getName() const = 0;
//
//    /** Gets the description of the parameter. */
//    virtual const char *getDescription() const  = 0;
//
//    /** Gets the instance of the value. */
//    virtual const IParameterConstant *value() const  = 0;
//};
//
///** The collection of indicator parameters. */
//class INDICORE IParameterAlternatives
//{
// protected:
//    IParameterAlternatives();
//    virtual ~IParameterAlternatives();
// public:
//    /** Gets the number of parameters. */
//    virtual index_t size() const = 0;
//
//    /** Gets the parameter by the index. */
//    virtual const IParameterAlternative *getAlternative(index_t index) const = 0;
//
//    /** Gets the parameter by the name. */
//    virtual const IParameterAlternative *getAlternative(const char *ID) const = 0;
//};
//
//
///** A group of the parameters. */
//class INDICORE IParameterGroup
//{
// protected:
//    IParameterGroup();
//    virtual ~IParameterGroup();
// public:
//    /** Get name of the group. */
//    virtual const char *getName() const = 0;
//    /** Gets the number of parameters. */
//    virtual index_t size() const = 0;
//    /** Gets the parameter by the index. */
//    virtual IParameter *getParameter(index_t index) const = 0;
//    /** Gets the index of the parameter in the main list. */
//    virtual index_t getParameterIndex(index_t index) const = 0;
//    /** Checks whether the parameter group is expanded by default. */
//    virtual bool isExpanded() const = 0;
//};
//
///** A group of the parameters. */
//class INDICORE IParameterGroups
//{
// protected:
//    IParameterGroups();
//    virtual ~IParameterGroups();
// public:
//    /** Gets the number of parameters. */
//    virtual index_t size() const = 0;
//    /** Gets the parameter by the index. */
//    virtual const IParameterGroup *getGroup(index_t index) const = 0;
//};
//
///** The collection of indicator parameters. */
//class INDICORE IParameters : public IObject
//{
// protected:
//    IParameters();
// public:
//    /** Gets the number of parameters. */
//    virtual index_t size() const = 0;
//
//    /** Gets the parameter by the index. */
//    virtual IParameter *getParameter(index_t index) const = 0;
//
//    /** Gets the parameter by the name. */
//    virtual IParameter *getParameter(const char *ID) const = 0;
//    virtual int findParameter(const char *ID) const = 0;
//
//    virtual const IParameterGroups *getGroups() const = 0;
//
//    /** Creates a copy of this collection. */
//    virtual IParameters *clone() const = 0;
//
//    virtual bool equal(const IParameters *other) const = 0;
//
//    static const GUID ID;
//};
//
//class ParameterValue;
//
//class INDICORE IValueMapWriter : public IObjectNoRef
//{
// protected:
//    IValueMapWriter();
// public:
//    virtual void addValue(IParameterConstant *value) = 0;
//    virtual void assignName(const char *name, size_t index) = 0;
//    static const GUID ID;
//};
//
//class INDICORE IValueMap : public IObject
//{
// protected:
//    IValueMap();
// public:
//    virtual void add(const IParameterConstant *value) = 0;
//    virtual void add(const ParameterValue &value) = 0;
//    virtual void set(const char *name, const IParameterConstant *value) = 0;
//    virtual void set(const char *name, const ParameterValue &value) = 0;
//    virtual const IParameterConstant *get(const char *name) const = 0;
//    virtual index_t size() const = 0;
//    virtual const IParameterConstant *get(index_t index) const = 0;
//    virtual IValueMap *clone() const = 0;
//    virtual void clone(IValueMapWriter *writer) const = 0;
//    static const GUID ID;
//};
//
//};
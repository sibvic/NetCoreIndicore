//TODO: conver
//#pragma once
//
//namespace indicore3
//{
//
//class INDICORE ParameterValue : public IParameterValue
//{
// private:
//    const char *returnString(const char *) const;
//    bool isObjectEqual(IObjectNoRef *obj) const;
// protected:
//    /** Type of the value. */
//    IParameterConstant::Type mType;
//    /** Values. */
//    int mIntValue;
//    bool mBoolValue;
//    double mDblValue;
//    std::string mStrValue;
//    mutable std::string *mConversionBuffer;
//    bool mIsNil;
//    IObjectNoRef *mObject;
//
//    static void formatDate(double date, char *buffer, int bufferLength);
//    static double parseDate(const char *date);
//    static void formatColor(int color, char *buffer, int bufferLength);
//    static int parseColor(const char *color);
//
// public:
//    ParameterValue();
//    ParameterValue(IParameterConstant::Type type);
//    ParameterValue(int value, IParameterConstant::Type = IParameterConstant::Integer);
//    ParameterValue(bool value, IParameterConstant::Type = IParameterConstant::Boolean);
//    ParameterValue(double value, IParameterConstant::Type = IParameterConstant::Double);
//    ParameterValue(const char *value, IParameterConstant::Type = IParameterConstant::String);
//    ParameterValue(const std::string &value, IParameterConstant::Type = IParameterConstant::String);
//    ParameterValue(const IParameterConstant *value);
//    ParameterValue(const ParameterValue &value);
//    ParameterValue(IObjectNoRef *object, bool releaseAfterAssign = false);
//    virtual ~ParameterValue();
//
//    /** Gets type of the value. */
//    virtual Type getType() const;
//
//    /** Gets the boolean value of the parameter. */
//    virtual bool getBoolean() const;
//
//    /** Gets the integer value of the parameter. */
//    virtual int getInteger() const;
//
//    /** Gets the double value of the parameter. */
//    virtual double getDouble() const;
//
//    /** Gets the double value of the parameter. */
//    virtual double getDate() const;
//
//    /** Gets the string value of the parameter. */
//    virtual const char *getString() const;
//
//    /** Gets the string value of the parameter. */
//    virtual const char *getFile() const;
//
//    /** Gets the color value of the parameter. */
//    virtual int getColor() const;
//
//    /** Get object. If the object is IObject-derived, the
//        value must be released after use. */
//    virtual IObjectNoRef *getObject() const;
//    virtual bool getObject(GUID id, void **ppv) const;
//
//
//    /** Checks whether the value is not assigned yet. */
//    virtual bool isNil() const;
//
//    /** Compares the value to other value. */
//    virtual int CompareTo(const IParameterConstant *other) const;
//    virtual int CompareTo(const ParameterValue &other) const;
//
//    virtual void setInteger(int value);
//    virtual void setDouble(double value);
//    virtual void setBoolean(bool value);
//    virtual void setString(const char *value);
//    virtual void setFile(const char *value);
//    virtual void setColor(int value);
//    virtual void setDate(double value);
//    virtual void setObject(IObjectNoRef *object);
//
//    /** Sets the other value. */
//    virtual void set(const IParameterConstant *value);
//    void set(const ParameterValue &value);
//    void setNil();
//
//    ParameterValue& operator=(const ParameterValue &value);
//    ParameterValue& operator=(int value);
//    ParameterValue& operator=(double value);
//    ParameterValue& operator=(bool value);
//    ParameterValue& operator=(const char *value);
//    bool operator==(const ParameterValue &value) const;
//    bool operator!=(const ParameterValue &value) const;
//    bool operator>(const ParameterValue &value) const;
//    bool operator>=(const ParameterValue &value) const;
//    bool operator<(const ParameterValue &value) const;
//    bool operator<=(const ParameterValue &value) const;
//    operator bool() const;
//    operator int() const;
//    operator double() const;
//    operator const char *() const;
//};
//
//}
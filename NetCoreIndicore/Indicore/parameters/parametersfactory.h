//TODO: conver
//#pragma once
//
//namespace indicore3
//{
//
//class Parameters;
//class Parameter;
//class IError;
//
//class INDICORE ParameterFactory
//{
// private:
//    Parameters *mParameters;
//    Parameter *mLastParameter;
//    int mAltID;
// private:
//    Parameter *getById(const char *pId);
//    bool checkCreateParameters(const char *id, const char *name, const char *description, IError **pperror);
//    bool checkAltParameter(Parameter *p, const char *id, const char *name, const char *description, IError **pperror);
//    Parameter *checkModifyParameter(const char *id, IError **pperror);
// public:
//    ParameterFactory();
//    ~ParameterFactory();
//    void makeNewSet();
//    IParameters *getParameters();
//    IParameter *getLastParameter();
//
//    void createGroup(const char *name, bool expand);
//
//    bool addIntegerParameter(const char *id, const char *name, const char *description, int defaultValue, IError **pperror);
//    bool addIntegerParameterMin(const char *id, const char *name, const char *description, int defaultValue, int minValue, IError **pperror);
//    bool addIntegerParameterMax(const char *id, const char *name, const char *description, int defaultValue, int maxValue, IError **pperror);
//    bool addIntegerParameterMinMax(const char *id, const char *name, const char *description, int defaultValue, int minValue, int maxValue, IError **pperror);
//    bool addDoubleParameter(const char *id, const char *name, const char *description, double defaultValue, IError **pperror);
//    bool addDoubleParameterMin(const char *id, const char *name, const char *description, double defaultValue, double minValue, IError **pperror);
//    bool addDoubleParameterMax(const char *id, const char *name, const char *description, double defaultValue, double maxValue, IError **pperror);
//    bool addDoubleParameterMinMax(const char *id, const char *name, const char *description, double defaultValue, double minValue, double maxValue, IError **pperror);
//
//    bool addColorParameter(const char *id, const char *name, const char *description, int defaultValue, IError **pperror);
//    bool addBooleanParameter(const char *id, const char *name, const char *description, bool defaultValue, IError **pperror);
//    bool addDateParameter(const char *id, const char *name, const char *description, double defaultValue, IError **pperror);
//
//    bool addStringParameter(const char *id, const char *name, const char *description, const char *defaultValue, IError **pperror);
//    bool addFileParameter(const char *id, const char *name, const char *description, const char *defaultValue, IError **pperror);
//
//    bool addIntegerAlternative(const char *pId, const char *id, const char *name, const char *description, int value, IError **pperror);
//    bool addDoubleAlternative(const char *pId, const char *id, const char *name, const char *description, double value, IError **pperror);
//    bool addStringAlternative(const char *pId, const char *id, const char *name, const char *description, const char *value, IError **pperror);
//
//    bool setFlag(const char *pId, IParameter::Flag flag, IError **pperror);
//};
//
//
//}
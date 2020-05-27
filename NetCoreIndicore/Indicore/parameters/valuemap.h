//TODO: conver
//#pragma once
//#include "../parameters/parametervalue.h"
//
//namespace indicore3
//{
//
//class INDICORE ValueMap : public TAddRefImpl<IValueMap>
//{
// private:
//    std::vector<ParameterValue *> *mValues;
//    std::map<std::string, size_t> *mMap;
// protected:
//    ~ValueMap();
// public:
//    ValueMap();
//    
//    virtual void add(const IParameterConstant *value);
//    virtual void set(const char *name, const IParameterConstant *value);
//    virtual void add(const ParameterValue &value);
//    virtual void set(const char *name, const ParameterValue &value);
//    virtual const IParameterConstant *get(const char *name) const;
//    virtual index_t size() const;
//    virtual const IParameterConstant *get(index_t index) const;
//    virtual IValueMap *clone() const;
//    virtual void clone(IValueMapWriter *writer) const;
//    DECLARE_ID()
//    DECLARE_ID_MAP()
//};
//
//
//class INDICORE ValueMapFixedSize : public TAddRefImpl<IValueMap>
//{
// private:
//    std::vector<ParameterValue> *mValues;
//    std::map<std::string, size_t> *mMap;
// protected:
//    ~ValueMapFixedSize ();
// public:
//    ValueMapFixedSize(size_t size);
//    
//    virtual void add(const IParameterConstant *value);
//    virtual void set(const char *name, const IParameterConstant *value);
//    virtual void add(const ParameterValue &value);
//    virtual void set(const char *name, const ParameterValue &value);
//    virtual const IParameterConstant *get(const char *name) const;
//    virtual index_t size() const;
//    virtual const IParameterConstant *get(index_t index) const;
//    virtual IValueMap *clone() const;
//    virtual void clone(IValueMapWriter *writer) const;
//
//   
//     ParameterValue& getForInit(index_t index);
//
//    DECLARE_ID()
//    DECLARE_ID_MAP()
//};
//}
//TODO: convert
//#pragma once
//namespace indicore3
//{
//
//class ILocalizationSource;
//
//class INDICORE ILocalizationModuleListener
//{
// public:
//    virtual void onLanguageChanged(const char *id, ILocalizationSource *localization) = 0;
//};
//
//class INDICORE LocalizationModule
//{
// private:
//    static std::string mLanguage;
//    static std::vector<ILocalizationModuleListener *> *mListeners;
//    static ILocalizationSource *mSource;
// public:
//    static void addLanguageListener(ILocalizationModuleListener *listener);
//    static void removeLanguageListener(ILocalizationModuleListener *listener);
//
//    static const char *getLanguage();
//    static void setLanguage(const char *id, ILocalizationSource *localization);
//    static void release();
//};
//
//}
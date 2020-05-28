#pragma once

namespace ProfitRobots
{
    namespace NetCoreIndicore
    {
        public enum class Language
        {
            UnknownLanguage = -1,
            Lua,
            Js,
            NativeWin,
            Python,
            LanguageCount
        };
            
        public enum class ObjectType
        {
            UnknownType,
            Indicator,
            Strategy,
            Tool,
            Macro,
        };

        public interface class IFileSystemMetadataProvider// : public IObject
		{
			virtual indicore3::IFileSystemMetadataProvider* GetNative() = 0;
            //    virtual ILanguageService::Language expectedLanguage() = 0;
            //    virtual ILanguageService::ObjectType expectedType() = 0;
            //    virtual IPermissions *permissions(const char *id) = 0;
		};

        public ref class FileSystemMetadataProvider : public IFileSystemMetadataProvider
        {
            indicore3::FileSystemMetadataProvider* _native;
        public:
            FileSystemMetadataProvider(Language implementation, ObjectType fileType);
            ~FileSystemMetadataProvider();

            virtual indicore3::IFileSystemMetadataProvider* GetNative();
            
            //    virtual ILanguageService::Language expectedLanguage();
            //    virtual ILanguageService::ObjectType expectedType();
            //    virtual IPermissions *permissions(const char *id);
        };
    }
}
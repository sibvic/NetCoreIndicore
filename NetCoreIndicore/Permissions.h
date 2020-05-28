#pragma once

namespace ProfitRobots
{
	namespace NetCoreIndicore
	{
        public ref class IPermissions// : public IObject
        {
        public:
            virtual indicore3::IPermissions* GetNative() = 0;
        //    enum Permission
        //    {
        //        FFIAllowed,                 //enables or disables FFI access for LuaJIT
        //        OSCriticalAccessAllowed,    //enables or disables critical OS functions (such as registry modification outside of the sandbox keys)
        //        DLLLoadAllowed,             //enables or disables loading of a certain dll, param == dll name
        //        FileAccessAllowed,          //enables or disables access to a files in file system for a certain file, param == file name
        //        LuaInteropAllowed,          //enables or disable Lua interop services
        //        FileReadAllowed,            //enables or disables read from files in file system for a certain file, param == file name
        //        FileWriteAllowed,           //enables or disables write to files in file system for a certain file, param == file name
        //        RegistryReadAllowed,        //enables or disables registry read, except allow SandBox, param == registry key
        //        RegistryWriteAllowed,       //enables or disables registry write,, except allow SandBox, param == registry key
        //        OSExecuteAllowed,           //enables or disables execute commands by an operating system shell
        //        TradingTableReadAllowed,    //enables or disables read data from trading Table
        //        TradingAllowed,             //enables or disables ability of the code to trade
        //        HttpAccessAllowed,          //enables or disables access to a resource in the network , param == url
        //        LanguageAllowed,            //enables or disables loading the language by its name: lua, js, ...
        //        PythonImportAllowed,        //enables or disables loading the python module by its name
        //        PythonSysAllowed,           //enables or disables sys and importlib lock
        //    };
        //
        //    virtual bool checkPermission(Permission permission, const char *param = 0) = 0;
        };
    }
}
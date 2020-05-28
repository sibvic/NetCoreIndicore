#pragma once

namespace ProfitRobots 
{
	namespace NetCoreIndicore 
	{
        Error^ Create(indicore3::IError* error)
        {
            return gcnew Error(error);
        }

        ref class NetString
        {
            System::String^ _string;
            System::IntPtr _ptr;
        public:
            NetString(System::String^ string)
            {
                _string = string;
                _ptr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(_string);
            }

            ~NetString()
            {
                System::Runtime::InteropServices::Marshal::FreeHGlobal(_ptr);
            }

            const char* c_str()
            {
                return (char*)(void*)_ptr;
            }
        };
    }
}
#pragma once

namespace ProfitRobots 
{
	namespace NetCoreIndicore 
	{
        Error^ Create(indicore3::IError* error)
        {
            return gcnew Error(error);
        }
    }
}
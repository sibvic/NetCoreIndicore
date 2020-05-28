#include "pch.h"
#include "Error.h"

using namespace ProfitRobots::NetCoreIndicore;

Error::Error(indicore3::IError* native)
{
    _native = native;
}

Error::~Error()
{
    _native->release();
}
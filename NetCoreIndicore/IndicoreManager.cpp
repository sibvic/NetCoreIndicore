#include "pch.h"
#include "IndicoreManager.h"

using namespace ProfitRobots::NetCoreIndicore;

IndicoreManager::IndicoreManager(indicore3::IndicoreManager* native)
{
    _native = native;
}

IndicoreManager::~IndicoreManager()
{
    _native->release();
}

IndicoreManager^ IndicoreManager::Create(IPermissions^ permissions)
{
    auto indicoreInstance = indicore3::IndicoreManager::createInstance(permissions == nullptr ? nullptr : permissions->GetNative());
    if (indicoreInstance == nullptr)
    {
        return nullptr;
    }
    return gcnew IndicoreManager(indicoreInstance);
}
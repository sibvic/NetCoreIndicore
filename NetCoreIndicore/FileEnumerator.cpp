#include "pch.h"
#include "FileEnumerator.h"

using namespace ProfitRobots::NetCoreIndicore;


FileEnumerator::FileEnumerator(indicore3::IFileEnumerator* native)
{
    _native = native;
}

FileEnumerator::~FileEnumerator()
{
    _native->release();
}
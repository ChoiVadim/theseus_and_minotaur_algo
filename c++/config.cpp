#include "config.h"

namespace
{
    bool __debug = false;
}

bool debug()
{
    return __debug;
}

void set_debug(bool value)
{
    __debug = value;
}

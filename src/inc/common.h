#pragma once

typedef long long int int64_t;
typedef int int32_t;

static inline int32_t abs(int32_t val)
{
    if (val >= 0)
    {
        return val;
    }
    else
    {
        return val*(-1);
    }
}
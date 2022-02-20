#pragma once
#include<assert.h>
#include<stdio.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;

#define BE_ASSERT(expr) assert(expr)
#define FE_ASSERT(expr) assert(expr)


static inline uint32_t absolute(uint32_t val)
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
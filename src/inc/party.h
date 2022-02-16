#pragma once
#include "common.h"
#include "issues.h"

typedef struct Party
{
    int64_t tag;            //Party identifier tag
    Issues_t issues;        //placeholder
}Party_t;

Party_t Party_Init(int64_t tag, Issues_t issues);
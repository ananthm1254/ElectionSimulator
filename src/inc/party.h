#pragma once
#include "common.h"

typedef struct Party
{
    int64_t tag;            //Party identifier tag
    Issue_t issues[2];      //placeholder
}Party_t;

Party_t Party_Init(int64_t tag, Issue_t *issues);
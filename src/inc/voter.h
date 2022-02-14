#pragma once
#include "common.h"
#include "party.h"
#include "issues.h"

typedef struct Voter{
    int64_t tag;        // identifier tag
    int32_t age;        //age of voter (important factor)
    Issues_t issues;     //placeholder
} Voter_t;

Voter_t Voter_Init(int64_t tag, int32_t age, Issues_t issues);

Party_t Vote(Voter_t voter, Party_t* partylist, int32_t numberOfParties);
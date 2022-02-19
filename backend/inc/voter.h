#pragma once
#include "common.h"
#include "party.h"
#include "issues.h"

typedef struct Voter{
    uint64_t tag;        // identifier tag
    uint32_t age;        //age of voter (important factor)
    Issues_t issues;     //placeholder
} Voter_t;

Voter_t Voter_Init(uint64_t tag, uint32_t age, Issues_t issues);

Party_t Vote(uint32_t numberOfParties, Voter_t voter, Party_t* partylist);
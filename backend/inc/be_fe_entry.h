#pragma once

#include "voter.h"
#include "party.h"

typedef struct Listing{
    uint32_t num;
    Voter_t voter;
    Party_t partylist[2];
} Listing_t;

void BeFeEntry(void* inputpayload, void* outputpayload);

void BeFeInit(Voter_t * inputpayload, Voter_t * outputpayload);
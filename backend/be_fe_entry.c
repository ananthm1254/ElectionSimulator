#include "common.h"
#include "voter.h"
#include "party.h"
#include "stdio.h"

typedef struct Listing{
    uint32_t num;
    Voter_t voter;
    Party_t partylist[2];
} Listing_t;

void BeFeEntry(void* inputpayload, void* outputpayload)
{
    Listing_t* list = (Listing_t *)inputpayload;
    uint32_t numberOfParties = list->num;
    Voter_t voter = list->voter;
    Party_t* partylist = &(list->partylist[0]);

    Party_t party = Vote(numberOfParties,voter,partylist);

    outputpayload = (Party_t *)(&party);

    return;

}

void BeFeInit(Voter_t * inputpayload, Voter_t * outputpayload)
{
    outputpayload->tag = inputpayload->tag;
    outputpayload->issues = inputpayload->issues;
    outputpayload->age = inputpayload->age + 1;
}
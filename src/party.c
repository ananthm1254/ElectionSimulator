#include<stdio.h>
#include<math.h>
#include<string.h>

#include "common.h"
#include "voter.h"
#include "party.h"

Party_t Party_Init(int64_t tag, Issue_t *issues)
{
    Party_t party;
    
    party.tag = tag;
    memcpy(party.issues, issues, 2*sizeof(Issue_t));
    
    return party;
}
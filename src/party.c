#include<stdio.h>
#include<math.h>
#include<string.h>

#include "common.h"
#include "voter.h"
#include "party.h"

Party_t Party_Init(int64_t tag, Issues_t issues)
{
    Party_t party;
    
    party.tag = tag;
    party.issues = issues;
    
    return party;
}
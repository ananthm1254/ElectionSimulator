#include<stdio.h>
#include<math.h>
#include<string.h>

#include "common.h"
#include "voter.h"
#include "party.h"

Voter_t Voter_Init(int64_t tag, int32_t age, Issue_t *issues)
{
    Voter_t voter;
    
    voter.tag = tag;
    voter.age = age;
    memcpy(voter.issues, issues, 2*sizeof(Issue_t));
    
    return voter;
}

Party_t Vote(Voter_t voter, Party_t* partylist, int32_t numberOfParties)
{
    Issue_t diff[numberOfParties], minScore;

    Party_t voteReceived;
    
    minScore = INFINITY;

    for(int i=0; i<numberOfParties; i++)
    {
        diff[i] = ((voter.issues[0]-partylist[i].issues[0])*(voter.issues[0]-partylist[i].issues[0]))
                + ((voter.issues[1]-partylist[i].issues[1])*(voter.issues[1]-partylist[i].issues[1]));

        if(diff[i]<minScore)
        {
            voteReceived = partylist[i];
        }
        printf("%f\n", diff[i]);
    }
    return voteReceived;
}
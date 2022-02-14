#include<stdio.h>
#include<math.h>
#include<string.h>

#include "common.h"
#include "voter.h"
#include "party.h"
#include "issues.h"

Voter_t Voter_Init(int64_t tag, int32_t age, Issues_t issues)
{
    Voter_t voter;
    
    voter.tag = tag;
    voter.age = age;
    voter.issues = issues;
    
    return voter;
}

Party_t Vote(Voter_t voter, Party_t* partylist, int32_t numberOfParties)
{
    int32_t diff[numberOfParties], minScore;

    Party_t voteReceived;
    
    minScore = 2*ISSUE_MAX_CNT;

    for(int i=0; i<numberOfParties; i++)
    {
        diff[i] = abs(voter.issues.economicIssues - partylist[i].issues.economicIssues) + 
                  abs(voter.issues.socialIssues - partylist[i].issues.socialIssues);
        
        if(diff[i]<minScore)
        {
            minScore = diff[i];
            voteReceived = partylist[i];
        }
        //printf("%f\n", diff[i]);
    }
    return voteReceived;
}
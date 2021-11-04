#include<stdio.h>
#include<math.h>

#include "common.h"
#include "voter.h"
#include "party.h"

int main()
{
    Issue_t voterIssues[2] = {0.0, 0.0};

    Issue_t partyIssues[2][2] = {
        {0.5, 0.5},
        {0.25, 0.5}
    };

    Voter_t voter = Voter_Init(0, 18, voterIssues);

    printf("Voter name: %lld, Voter age: %d\n", voter.tag, voter.age);

    Party_t partylist[2] = { Party_Init(0, partyIssues[0]), Party_Init(1, partyIssues[1])};

    printf("Party name: %lld, %lld\n", partylist[0].tag, partylist[1].tag);

    Party_t voteReceived = Vote(voter, partylist, 2);

    printf("Vote received for %lld\n", voteReceived.tag);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include "fe_task_handler.h"
#include"common.h"
#include "be_fe_entry.h"
#include "voter.h"

static uint32_t gInitialized = 0;
static uint32_t gCmdCount = 0;


void FeCmdHandler(FeTaskCmds_t entrycmd, void* inputpayload, void* outputpayload)
{
    switch (entrycmd)
    {
        case FE_TASK_FE_INIT:
            FeInit((uint32_t *)outputpayload);
            break;
            
    case FE_TASK_INIT_BE:
            BeFeInit((Voter_t *)inputpayload, (Voter_t *)outputpayload);
            break;

        case FE_TASK_INTEGRITY_CHECK:
            //Be_Fe_Integrity(inputpayload, outputpayload);
            break;

        case FE_TASK_VOTE_CMD:
            BeFeEntry(inputpayload, outputpayload);
            break;

        default:
            printf("Fail");
    }

    gCmdCount++;
}

void FeInit(uint32_t* outputpayload)
{
    if (gInitialized == 0)
    {
        gInitialized = 1;
        gCmdCount    = 0;
    }

    *outputpayload = gCmdCount;
}

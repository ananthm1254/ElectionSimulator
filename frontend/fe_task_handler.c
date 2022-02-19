#include<stdio.h>
#include "fe_task_handler.h"

void BeFeEntry(void* inputpayload, void* outputpayload);

void FeCmdHandler(FeTaskCmds_t entrycmd, void* inputpayload, void* outputpayload)
{
    
    switch (entrycmd)
    {
        case FE_TASK_INIT_BE:
            //Be_Fe_Init(inputpayload, outputpayload);
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
}

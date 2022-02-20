#pragma once


typedef enum _FeTaskCmds_t{
    FE_TASK_FE_INIT         =   0,
    FE_TASK_INIT_BE         =   1,
    FE_TASK_INTEGRITY_CHECK =   2,
    FE_TASK_VOTE_CMD        =   3,
    FE_TASK_MAX_CNT       
} FeTaskCmds_t;

typedef enum _FeRetStatus_t{
    FE_CMD_SUCCESS          =   0,
    FE_CMD_IN_PROGRESS      =   1,
    FE_CMD_FAILURE          =   2,
    FE_CMD_MAX_STATUS
} FeRetStatus_t;
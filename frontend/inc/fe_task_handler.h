
typedef enum _FeTaskCmds_t{
    FE_TASK_INIT_BE         =   0,
    FE_TASK_INTEGRITY_CHECK =   1,
    FE_TASK_VOTE_CMD        =   2,
    FE_TASK_MAX_CNT       
} FeTaskCmds_t;

void FeCmdHandler(FeTaskCmds_t entrycmd, void* inputpayload, void* outputpayload);
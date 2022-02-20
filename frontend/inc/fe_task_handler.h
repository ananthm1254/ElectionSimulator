#pragma once
#include "common.h"
#include "fe_defs.h"

void FeCmdHandler(FeTaskCmds_t entrycmd, void* inputpayload, void* outputpayload);

void FeInit(uint32_t* outputpayload);
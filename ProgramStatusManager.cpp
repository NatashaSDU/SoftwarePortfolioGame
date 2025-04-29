#include "ProgramStatusManager.h"

ProgramStatus ProgramStatusManager::status = ProgramStatus::Development;


ProgramStatus ProgramStatusManager::GetProgramStatus()
{
    return status;
}

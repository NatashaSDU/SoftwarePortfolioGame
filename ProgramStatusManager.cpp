#include "ProgramStatusManager.h"

ProgramStatus ProgramStatusManager::status = ProgramStatus::Release;


ProgramStatus ProgramStatusManager::GetProgramStatus()
{
    return status;
}

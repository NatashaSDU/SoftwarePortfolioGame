#ifndef PROGRAMSTATUSMANAGER_H
#define PROGRAMSTATUSMANAGER_H

#include "ProgramStatus.h"
class ProgramStatusManager
{
public:
    static ProgramStatus GetProgramStatus();

private:
    static ProgramStatus status;
};


#endif // PROGRAMSTATUSMANAGER_H

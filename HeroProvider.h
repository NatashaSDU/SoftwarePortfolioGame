#ifndef HEROPROVIDER_H
#define HEROPROVIDER_H

#include "DataAccess.h"
#include "ProgramStatus.h"
#include "ProgramStatusManager.h"

class HeroProvider {
private:
    DataAccess& access;

public:
    HeroProvider(DataAccess& access);
    Hero GetNewHero();
    Hero LoadHero();

};

#endif // HEROPROVIDER_H

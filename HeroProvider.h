#ifndef HEROPROVIDER_H
#define HEROPROVIDER_H

#include "DataAccess.h"
class HeroProvider {
private:
    DataAccess& access;

public:
    HeroProvider(DataAccess& access);
    Hero GetNewHero();
    Hero LoadHero();

};

#endif // HEROPROVIDER_H

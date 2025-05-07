#ifndef CAVEFACTORYBEGINNER_H
#define CAVEFACTORYBEGINNER_H

#include "CaveFactory.h"
class CaveFactoryBeginner: CaveFactory{
    CaveFactoryBeginner(int _level);
    std::string& GetName() override;
    int GetGold() override;
    std::vector<Opponent*> GetSelectableEnemies() override;
    Opponent* GetBoss() override;
};

#endif // CAVEFACTORYBEGINNER_H

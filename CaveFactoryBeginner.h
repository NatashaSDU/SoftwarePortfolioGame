#ifndef CAVEFACTORYBEGINNER_H
#define CAVEFACTORYBEGINNER_H

#include "CaveFactory.h"

class CaveFactoryBeginner: CaveFactory{
    CaveFactoryBeginner(int _level);
   const std::string& GetName() const override;
    int GetGold() override;
    std::vector<Opponent*> GetSelectableEnemies() override;
    Opponent* GetBoss() override;
private:
    const std::string name = "Beginner Cave";
    int gold=100;
};

#endif // CAVEFACTORYBEGINNER_H

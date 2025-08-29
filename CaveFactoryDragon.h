#ifndef CAVEFACTORYDRAGON_H
#define CAVEFACTORYDRAGON_H

#include "CaveFactory.h"
#include "Enemy.h"

class CaveFactoryDragon: CaveFactory{
    CaveFactoryDragon(int _level);
    const std::string& GetName() const override;
    int GetGold() override;
    std::vector<Opponent*> GetSelectableEnemies() override;
   
private:
    const std::string name = "Dragon Cave";
    int gold=100;
    Opponent* boss;
};
#endif // CAVEFACTORYDRAGON_H

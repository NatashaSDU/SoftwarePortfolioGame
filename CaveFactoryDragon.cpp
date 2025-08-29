#include "CaveFactoryDragon.h"

CaveFactoryDragon::CaveFactoryDragon(int _level):CaveFactory(_level){

}
const std::string& CaveFactoryDragon::GetName() const{
    return name;
}
int CaveFactoryDragon::GetGold(){
    return gold;
}


std::vector<Opponent*> GetSelectableEnemies() {
    std::vector<Opponent*> enemies = {
        new Enemy("Dragon", 40 * GetModifier(), 50 * GetModifier(), 3000),
    };
    return enemies;
}

#include "CaveFactoryBeginner.h"
CaveFactoryBeginner::CaveFactoryBeginner(int _level):CaveFactory(_level){

}
const std::string& CaveFactoryBeginner::GetName() const{
    return name;
}
int CaveFactoryBeginner::GetGold(){
    return gold;
}
std::vector<Opponent*> CaveFactoryBeginner::GetSelectableEnemies(){
    std::vector<Opponent*> enemies = {
       new Enemy("Spider", 1 * GetModifier(), 1 * GetModifier(), 50),
        new Enemy("Spider", 1 * GetModifier(), 1 * GetModifier(), 50),
        new Enemy("Big Spider", 1 * GetModifier(), 1 * GetModifier(), 100),
       
    };
    return enemies;

}


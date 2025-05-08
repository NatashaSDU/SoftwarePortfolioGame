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

}
Opponent* CaveFactoryBeginner::GetBoss(){}

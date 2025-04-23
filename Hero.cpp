#include "Hero.h"

Hero::Hero(const std::string& _name,int _level, int _attack, int _xp): Opponent(_attack,getHP()),name(_name), level(_level), xp(_xp){

}
int Hero::maximumXP() const {
    return level*1000;
}

int Hero::gainXP(int _addedXP){
    xp += _addedXP;
    while (xp >= maximumXP()) {
        xp -= maximumXP();
        level++;
    }
}

int Hero::getHP()
{
    level*2;
}

//Jeg har ikke lige forstået hvordan jeg skal beregne HP :( når level stiger.

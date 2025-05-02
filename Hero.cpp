#include "Hero.h"

Hero::Hero(const std::string& _name, int _level, int _xp):
    name(_name),
    level(_level),
    xp(_xp){
}

void Hero::gainXP(int _addedXP) {
    int currentLevel=level;

    xp += _addedXP;
    while (xp >= maximumXP()) {
        xp -= maximumXP();
        level++;
        // Hvis du ønsker at HP skal følge level up:
        // currentHP = 10 + (level - 1) * 2;
    }
    if(currentLevel<level)
    {
       std::cout << "You've leveled up to  " << GetLevel() << std::endl;
         std::cout << std::endl;
    }
}

int Hero::maximumXP() const
{
    return level*1000;
}

void Hero::GetDescription() const
{
     std::cout << name << " has " << GetHP() << " HP, is level " << GetLevel()<< " and has " << xp<< " XP" << std::endl;
}

Opponent* Hero::Clone() const {
    return new Hero(*this); // bruger copy constructor
}

int Hero::GetHP() const {
    return 10 + (level - 1) * 2;
}

int Hero::GetAttack() const {
   return 2+(level-1)*1;
}



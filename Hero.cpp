#include "Hero.h"

Hero::Hero(const std::string& _name, int _level, int _xp): Opponent(2+_level, (10 + (_level - 1) * 2)),
    name(_name),
    level(_level),
    xp(_xp){
}

void Hero::gainXP(int _addedXP) {
    xp += _addedXP;
    while (xp >= maximumXP()) {
        xp -= maximumXP();
        level++;
        // Hvis du ønsker at HP skal følge level up:
        // currentHP = 10 + (level - 1) * 2;
    }
}

int Hero::maximumXP() const
{
    return level*1000;
}

void Hero::GetDescription() const
{
     std::cout << name << " har " << originalHP << " HP er level " << GetLevel()<< " og har " << xp<< " XP" << std::endl;
}




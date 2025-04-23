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



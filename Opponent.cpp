#include "Opponent.h"


Opponent::Opponent(int _attack, int _hp)
    : attack(_attack), currentHP(_hp) {}

    bool Opponent::isDead() const {
        return currentHP <= 0;
    }
    void Opponent::damage( int damage){
        currentHP-=damage;
    }

    int Opponent::getAttack() const {
        return attack;
    }


#include "Opponent.h"



Opponent::Opponent(int _attack, int _hp)
    : attack(_attack), currentHP(_hp), originalHP(_hp) {}

    bool Opponent::isDead() const {
        return currentHP <= 0;
    }
    void Opponent::damage( int damage){
        currentHP-=damage;
    }

    void Opponent::GetStatus()const{
        std::cout << GetName() << " har " << currentHP << " HP tilbage" << std::endl;
    }

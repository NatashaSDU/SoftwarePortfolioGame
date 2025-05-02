#include "Opponent.h"

Opponent::Opponent() {

}
    bool Opponent::isDead() const {
        return currentHP <= 0;
    }
    void Opponent::damage( int damage){
        currentHP-=damage;
    }

    void Opponent::GetStatus()const{
        std::cout << GetName() << " has " << currentHP << " HP remaining" << std::endl;


    }

    void Opponent::SetHP()
    {
        currentHP=GetHP();
    }

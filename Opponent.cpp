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
        std::cout << GetName() << " har " << currentHP << " HP tilbage" << std::endl;


    }

    void Opponent::SetHP()
    {
        currentHP=GetHP();
    }

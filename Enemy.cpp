#include "Enemy.h"


Enemy::Enemy(const std::string& _name, int _hp, int _attack, int _xp):  xp(_xp), hp(_hp), attack(_attack), name(_name){
}

void Enemy::GetDescription() const
{
    std::cout << name << " has " << GetHP() << " HP" << std::endl;
}

Opponent* Enemy::Clone() const {
    return new Enemy(*this); // bruger copy constructor
}

int  Enemy::GetHP() const {
    return hp;
}
int  Enemy::GetAttack() const {
    return attack;
}

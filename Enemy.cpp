#include "Enemy.h"

Enemy::Enemy(const std::string& _name, int _hp, int _damage, int _xp): Opponent(_damage, _hp), xp(_xp), name(_name){
}

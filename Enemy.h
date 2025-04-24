#ifndef ENEMY_H
#define ENEMY_H
#include "Opponent.h"
#include <string>

class Enemy : public Opponent {

public:
    Enemy(const std::string& _name, int _hp, int _damage, int _xp);

private:
    int xp;
    const std::string name;
    int GetXP() const  {
        return xp;
    }

};
#endif // ENEMY_H

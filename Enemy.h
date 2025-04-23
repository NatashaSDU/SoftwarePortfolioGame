#ifndef ENEMY_H
#define ENEMY_H
#include "Opponent.h"

class Enemy : public Opponent {

public:
    Enemy( int _damage, int _xp, int _hp);

private:
    int xp;

    int getXP() const override {
        return xp;
    }

};
#endif // ENEMY_H

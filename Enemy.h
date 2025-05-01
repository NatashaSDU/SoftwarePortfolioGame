#ifndef ENEMY_H
#define ENEMY_H
#include "Opponent.h"
#include <string>
#include <iostream>
#include <ostream>

class Enemy : public Opponent {

public:
    Enemy(const std::string& _name, int _hp, int _damage, int _xp);
    const std::string& GetName() const { return name; };
    void GetDescription()const override;
    Opponent* Clone() const override;

private:
    int xp;
    const std::string name;
    int GetXP() const override {
        return xp;
    }

};
#endif // ENEMY_H

#ifndef HERO_H
#define HERO_H
#include "Opponent.h"
#include <string>

class Hero: public Opponent{
private:
    const std::string name;

public:
    Hero(const std::string& _name, int _hp, int _attack);

};
#endif // HERO_H

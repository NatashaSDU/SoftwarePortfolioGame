#ifndef HERO_H
#define HERO_H
#include "Opponent.h"
#include <string>

class Hero : public Opponent {
private:
    const std::string name;
    int level;
    int xp;
public:
    Hero(const std::string& _name, int _level, int _xp);

    int maximumXP() const{return level*1000;}

    void gainXP(int _addedXP);
};
#endif // HERO_H

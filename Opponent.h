#ifndef OPPONENT_H
#define OPPONENT_H

#include <iostream>     // Kun hvis du bruger std::cout i f.eks. printStatus
#include <algorithm>    // Kun hvis du bruger std::max

class Opponent {
private:
    int attack;
    int originalHP;
    int currentHP;

public:
    Opponent(int _attack, int _hp);

    void damage(int damage);
    bool isDead() const;

    int getAttack() const;
};

#endif // OPPONENT_H

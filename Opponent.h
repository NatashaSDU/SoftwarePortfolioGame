#ifndef OPPONENT_H
#define OPPONENT_H

class Opponent {
private:
    int attack;
    int currentHP;

public:
    Opponent(int _attack, int _hp);
    void damage(int damage);
    bool isDead() const;

    int getAttack() const
    {
        return attack;
    }
   virtual int GetXP() const =0;
};

#endif // OPPONENT_H

#ifndef OPPONENT_H
#define OPPONENT_H

#include <string>
class Opponent {
private:
    int attack;
    int currentHP;


public:
    Opponent(int _attack, int _hp);
      virtual ~Opponent() = default;
    void damage(int damage);
    bool isDead() const;

    int getAttack() const
    {
        return attack;
    }
   virtual int GetXP() const =0;


    virtual void GetDescription()const=0;
   protected:
    int originalHP;
};

#endif // OPPONENT_H

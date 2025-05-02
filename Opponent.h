#ifndef OPPONENT_H
#define OPPONENT_H

#include <string>
#include <iostream>
#include <ostream>

class Opponent {
private:
    int currentHP;


public:
    Opponent();
      virtual ~Opponent() = default;
    void damage(int damage);
    bool isDead() const;

   virtual int GetXP() const =0;

    virtual int GetHP() const =0;
     virtual int GetAttack() const =0;

    virtual void GetDescription()const=0;
       virtual Opponent* Clone() const = 0;
   virtual const std::string& GetName()const=0;
   void GetStatus()const;
   void SetHP();

};

#endif // OPPONENT_H

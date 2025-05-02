#ifndef HERO_H
#define HERO_H
#include "Opponent.h"
#include <string>
#include <ostream>
#include <iostream>

class Hero : public Opponent {
private:
    const std::string name;
    int level;
    int xp;
   int GetMaximumXP() const;


public:

     Hero(const std::string& _name, int _level = 1, int _xp = 0);
   void gainXP(int _addedXP);
     const std::string& GetName() const override;
   void SetLevel(int _level);
     void SetXP(int _xp);
   int GetLevel()const;
   int GetXP() const override {
     return  xp;
   }
   void GetDescription()const override;
 Opponent* Clone() const override;

   int GetHP() const override;
   int GetAttack() const override;

};
#endif // HERO_H

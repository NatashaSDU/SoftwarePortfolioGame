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
     int maximumXP() const;


public:

     Hero(const std::string& _name, int _level = 1, int _xp = 0);
   void gainXP(int _addedXP);
   const std::string& GetName() const override { return name; }
   void SetLevel(int _level){level=_level;}
   void SetXP(int _xp){xp=_xp;}
   int GetLevel()const {return level;}
   int GetXP() const override {
     return  xp;
   }
   void GetDescription()const override;
 Opponent* Clone() const override;


};
#endif // HERO_H

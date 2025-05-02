#include "Hero.h"

Hero::Hero(const std::string& _name, int _level, int _xp):
    name(_name),
    level(_level),
    xp(_xp){
}

void Hero::gainXP(int _addedXP) {
    int currentLevel=level;

    xp += _addedXP;
    while (xp >= GetMaximumXP()) {
        xp -= GetMaximumXP();
        level++;
    }
    if(currentLevel<level)
    {
       std::cout << "You've leveled up to  " << GetLevel() << std::endl;
         std::cout << std::endl;
    }
}

 void Hero::SetXP(int _xp){xp=_xp;}

  int Hero::GetLevel()const {return level;}

const std::string& Hero::GetName() const { return name; }

 void Hero::SetLevel(int _level){level=_level;}

int Hero::GetMaximumXP() const
{
    return level*1000;
}

void Hero::GetDescription() const
{
     std::cout << name << " has " << GetHP() << " HP, is level " << GetLevel()<< " and has " << xp<< " XP" << std::endl;
}

Opponent* Hero::Clone() const {
    return new Hero(*this); // bruger copy constructor
}

int Hero::GetHP() const {
    return 10 + (level - 1) * 2;
}

int Hero::GetAttack() const {
   return 2+(level-1)*1;
}



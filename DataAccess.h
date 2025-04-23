#ifndef DATAACCESS_H
#define DATAACCESS_H
#include "Hero.h"
#include <vector>
#include <string>

class DataAccess{
 private:
     std::vector<Hero> heroes;

 public:
 void AddHero(const Hero& _hero);
 void UpdateHero(Hero& _hero);
 Hero LoadCopiedHero(const std::string& name);
 bool IsNameAvailable(std::string& _name);
};
#endif // DATAACCESS_H

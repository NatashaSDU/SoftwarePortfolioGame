#ifndef DATAACCESS_H
#define DATAACCESS_H
#include "Hero.h"
#include <vector>
#include <string>
#include "ProgramStatus.h"
#include "ProgramStatusManager.h"
#include "RequestInput.h"

class DataAccess{
 private:
     std::vector<Hero> heroes;

 public:
 void AddHero(Hero& _hero);
 void UpdateHero(Hero* _hero);
 Hero LoadCopiedHero();
 bool IsNameInUse(const std::string& _name) const;
 void PrintAllHeroes() const;
};
#endif // DATAACCESS_H

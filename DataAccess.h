#ifndef DATAACCESS_H
#define DATAACCESS_H
#include "Hero.h"
#include <vector>
#include <string>
#include <iostream>

class DataAcess{
 private:
    static std::vector<Hero> heroes;

 public:
static void AddHero(const Hero& _hero);
static void UpdateHero(Hero& _hero);
static Hero LoadCopiedHero(const std::string& name);
static bool IsNameAvailable(std::string& _name);
};
#endif // DATAACCESS_H

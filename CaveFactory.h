#ifndef CAVEFACTORY_H
#define CAVEFACTORY_H
#include "CaveObject.h"
class CaveFactory{
public:
    CaveFactory(int _level);
     virtual ~CaveFactory() = default;
     CaveObject* GetCave();


protected:
    int level;
    virtual const std::string& GetName() const=0;
    virtual int GetGold()=0;
  virtual std::vector<Opponent*> GetSelectableEnemies()=0;
    virtual Opponent* GetBoss()=0;
  float GetModifier();

};
#endif // CAVEFACTORY_H

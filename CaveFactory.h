#ifndef CAVEFACTORY_H
#define CAVEFACTORY_H
#include "Cave.h"
class CaveFactory{
public:
    CaveFactory(int _level);
     virtual ~CaveFactory() = default;
     Cave* GetCave();

private: int level;

protected:
    virtual std::string& GetName()=0;
    virtual int GetGold()=0;
  virtual std::vector<Opponent*> GetSelectableEnemies()=0;
    virtual Opponent* GetBoss()=0;

};
#endif // CAVEFACTORY_H

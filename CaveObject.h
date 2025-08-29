#ifndef CAVEOBJECT_H
#define CAVEOBJECT_H

#include "Opponent.h"
#include <string>
#include <vector>
#include "RequestInput.h"
class CaveObject{
private:
    int gold;
    const std::string& name;
    std::vector<Opponent*> remainingEnemies;

public:
    CaveObject(const std::string& _name,int _gold);
    ~CaveObject();
    void AddEnemy(Opponent* enemy);
    bool MoreEnemies();
    Opponent* SelectEnemy();
   
    
    int GetGold() const;
    const std::string& GetName() const;
};

#endif // CAVEOBJECT_H

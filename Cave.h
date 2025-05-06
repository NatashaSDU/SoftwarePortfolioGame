#ifndef CAVE_H
#define CAVE_H

#include "Opponent.h"
#include <string>
#include <vector>
#include "RequestInput.h"
class Cave{
private:
    int gold;
    const std::string& name;
     std::vector<Opponent*> remainingEnemies;
    Opponent* boss;

public:
    Cave(const std::string& _name,int _gold);
    ~Cave();
    void AddEnemy(Opponent* enemy);
    bool MoreEnemies();
    Opponent* SelectEnemy();
    void SetBoss(Opponent* _boss);
    Opponent* GetBoss() const;
    int GetGold() const;
    const std::string& GetName() const;
};

#endif // CAVE_H

#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H
#include "CaveObject.h"
#include "Enemy.h"
#include "Hero.h"
#include "State.h"
#include "DataAccess.h"
#include "Opponent.h"
#include <memory>
#include "RequestInput.h"
#include "ProgramStatus.h"
#include "ProgramStatusManager.h"

class GameController
{
public:
    GameController(DataAccess& data, Hero* _hero);
    void ChangeState(std::shared_ptr<State> _state);
    void RegisterVictory(int _xp);
    Opponent* GetHero();
    CaveObject* SelectCave();
    void Save();
    Opponent* SelectEnemy();

    void CaveCompleted();

private:
  //  bool isGameOn=true;
     DataAccess& dataAccess;
       std::shared_ptr<State> currentState;
     Hero* hero;
     void StartGame();
     const std::vector<Enemy>& GetEnemies() const;
     std::vector<Enemy> enemies;


};

#endif // GAMECONTROLLER_H

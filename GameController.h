#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H
#include "Enemy.h"
#include "Hero.h"
#include "State.h"
#include "DataAccess.h"
#include "Opponent.h"
#include <memory>

class GameController
{
public:
    GameController(Hero& _hero);
    void ChangeState(std::unique_ptr<State> _state);
    void RegisterVictory(int _xp);
    Opponent& GetHero();
    void Save();
    Opponent& SelectEnemy();

private:
  //  bool isGameOn=true;
     DataAccess dataAccess;
     std::unique_ptr<State> currentState;
     Hero& hero;
     void StartGame();
     std::vector<Enemy> GetEnemies();


};

#endif // GAMECONTROLLER_H

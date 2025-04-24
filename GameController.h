#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H
#include "Hero.h"
#include "State.h"
#include "DataAccess.h"

class GameController
{
public:
    GameController(Hero& _hero);
    void ChangeState(State* _state);
 //   void GameIsOver();

private:
  //  bool isGameOn=true;
     DataAccess dataAccess;
     State* currentState;
     Hero& hero;
     void StartGame();
};

#endif // GAMECONTROLLER_H

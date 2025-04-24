#include "GameController.h"

GameController::GameController(Hero& _hero):hero(_hero){}

void GameController::ChangeState(State* _state)
{
    currentState=_state;
}

void GameController::StartGame()
{
    currentState=new
}

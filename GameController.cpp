#include "GameController.h"
#include "StateRetreatOffer.h"


GameController::GameController(Hero& _hero):hero(_hero){
    StartGame();
}

void GameController::ChangeState(std::unique_ptr<State> _state)
{
    currentState=std::move(_state);
}


void GameController::StartGame()
{
    currentState=std::make_unique<StateRetreatOffer>();
}

void GameController::RegisterVictory(int _xp){
    hero.gainXP(_xp);
}

Opponent& GameController:: GetHero(){
    return hero;
}

void GameController::Save()
{
    dataAccess.UpdateHero(hero);
}

Opponent& GameController::SelectEnemy(){


}

 std::vector<Enemy> GameController::GetEnemies()
{

    return std::vector<Enemy> enemies = {
               Enemy("Hest", 4, 1, 100 ),
               Enemy("Strong Goblin", 4, 1, 100 ),
               Enemy("Hest", 4, 1, 100 ),
               Enemy("Hest", 4, 1, 100 )

           };
}

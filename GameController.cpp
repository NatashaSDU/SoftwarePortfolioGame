#include "GameController.h"

#include "StateRetreatOffer.h"




GameController::GameController(DataAccess& data,Hero* _hero):dataAccess(data), hero(_hero) ,enemies{
          Enemy("Horse", 4, 1, 100),
          Enemy("Strong Goblin", 8, 3, 400),
          Enemy("Monkey King", 30, 5, 1000),
          Enemy("Dragon", 100, 10, 3000)
      } {


     if(ProgramStatusManager::GetProgramStatus() == ProgramStatus::Development)
     {
          std::cout << "GameController: "<< std::endl;
        hero->GetDescription();
     };

    StartGame();
     if(ProgramStatusManager::GetProgramStatus() == ProgramStatus::Development)
     {
         std::cout << "Exiting GameController: "<< std::endl;
     };
}

void GameController::ChangeState(std::shared_ptr<State> _state)
{
    currentState=_state;
    currentState->SetContext(this);
    currentState->OnStart();
}


void GameController::StartGame()
{

    currentState=std::make_unique<StateRetreatOffer>();
      currentState->SetContext(this);
    currentState->OnStart();

}

void GameController::RegisterVictory(int _xp){
    hero->gainXP(_xp);
}

Opponent* GameController:: GetHero(){
    return hero->Clone();
}

void GameController::Save()
{
    dataAccess.UpdateHero(hero);
}

Opponent* GameController::SelectEnemy() {
     auto& input = RequestInput::GetInstance("Select an enemy to fight");
    for (const auto& enemy : enemies) {
        input.AddOption(enemy.GetName());
    }
     int selected = input.SelectedValue();
      return enemies[selected-1].Clone();
}



const std::vector<Enemy>& GameController::GetEnemies() const {
    return enemies;
}

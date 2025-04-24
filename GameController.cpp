#include "GameController.h"
#include "StateRetreatOffer.h"




GameController::GameController(Hero& _hero):hero(_hero), enemies{
          Enemy("Hest", 4, 1, 100),
          Enemy("Strong Goblin", 8, 3, 400),
          Enemy("Abe Kongen", 30, 5, 1000),
          Enemy("Drage", 100, 10, 3000)
      } {
    StartGame();
}

void GameController::ChangeState(std::shared_ptr<State> _state)
{
    currentState=_state;
    currentState->SetContext(this);
}


void GameController::StartGame()
{
    currentState=std::make_unique<StateRetreatOffer>();
     currentState->SetContext(this);
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

Opponent& GameController::SelectEnemy() {
    auto& input = RequestInput::GetInstance("Vælg en fjende at bekæmpe");

    for (const auto& enemy : enemies) {
        input.AddOption(enemy.GetName());
    }

    int selected = input.SelectedValue();
    return enemies[selected];
}

const std::vector<Enemy>& GameController::GetEnemies() const {
    return enemies;
}

#include "StateFight.h"
#include "StateRetreatOffer.h"


StateFight::StateFight(Opponent* _enemy): enemy(_enemy) {


}

StateFight::~StateFight()  {
    delete enemy;
    delete hero;
}
void StateFight::OnStart(){
    if(ProgramStatusManager::GetProgramStatus() == ProgramStatus::Development)
    {
        std::cout << "In StateFight"<< std::endl;
    };

    hero=context->GetHero();

    hero->SetHP();
    enemy->SetHP();

  std::cout << std::endl;
    hero->GetStatus();
    enemy->GetStatus();

    while (!hero->isDead() && !enemy->isDead()) {
        int heroAttack=hero->GetAttack();
        int enemyAttack=enemy->GetAttack();
 std::cout << std::endl;
        hero->damage(enemyAttack);
        enemy->damage(heroAttack);

        hero->GetStatus();
        enemy->GetStatus();
        std::cout << std::endl;
    }

    if(!hero->isDead())
    {
        context->RegisterVictory(enemy->GetXP());
        std::cout << "You won!" << std::endl;

    }
    else
    {
        std::cout << "You lost!" << std::endl;
    }
       std::cout << std::endl;
    context->ChangeState(std::static_pointer_cast<State>(std::make_shared<StateRetreatOffer>()));
}


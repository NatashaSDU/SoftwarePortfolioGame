#include "StateFight.h"



StateFight::StateFight(Opponent* _hero, Opponent* _enemy): enemy(_enemy), hero(_hero) {


}

StateFight::~StateFight()  {
    delete enemy;
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
        hero->GetDescription();

        if(context->MoreEnemies())
        {
            context->ChangeState(std::make_shared<StateFightOptions>(hero));
        }
        else
        {
            context->ChangeState(std::make_shared<StateFight>(hero));
        }
    }
    else
    {

       GameOver(hero);
    }
       std::cout << std::endl;

}


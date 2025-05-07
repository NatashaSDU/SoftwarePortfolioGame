#include "StateFight.h"
#include "StateBossFight.h"
#include "StateFightOptions.h"




StateFight::StateFight(Opponent* _hero, Opponent* _enemy, CaveObject*_cave ): enemy(_enemy), hero(_hero),  cave(_cave) {


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

        if(cave->MoreEnemies())
        {
            context->ChangeState(std::make_shared<StateFightOptions>(hero, cave));
        }
        else
        {
            context->ChangeState(std::make_shared<StateBossFight>(hero,cave));
        }
    }
    else
    {

       GameOver(hero, cave);
    }
       std::cout << std::endl;

}


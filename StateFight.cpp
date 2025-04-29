#include "StateFight.h"
#include "StateRetreatOffer.h"


StateFight::StateFight(Opponent& _enemy): enemy(_enemy) {


}
void StateFight::OnStart(){
    if(ProgramStatusManager::GetProgramStatus() == ProgramStatus::Development)
    {
        std::cout << "In StateFight"<< std::endl;
    };

    Opponent* hero= context->GetHero();
    hero->GetStatus();
    enemy.GetStatus();

    while (!hero->isDead() && !enemy.isDead()) {
        int heroAttack=hero->getAttack();
        int enemyAttack=enemy.getAttack();

        hero->damage(enemyAttack);
        enemy.damage(heroAttack);

        hero->GetStatus();
        enemy.GetStatus();

    }

    if(enemy.isDead())
    {
        context->RegisterVictory(enemy.GetXP());
        std::cout << "You won!" << std::endl;

    }
    else
    {
        std::cout << "You lost!" << std::endl;
    }
    context->ChangeState(std::static_pointer_cast<State>(std::make_shared<StateRetreatOffer>()));
}


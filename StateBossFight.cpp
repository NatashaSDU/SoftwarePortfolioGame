#include "StateBossFight.h"


StateBossFight::StateBossFight(Opponent* _hero) : hero(_hero){}

StateBossFight::~StateBossFight()  {
    delete enemy;
    delete hero;
     context->DeleteEnemies();
}

void StateBossFight::OnStart(){

    enemy = context->GetBoss();

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
    }
    else
    {
        std::cout << "You lost!" << std::endl;

    }
    std::cout << std::endl;
    context->ChangeState(std::static_pointer_cast<State>(std::make_shared<StateRetreatOffer>()));

}

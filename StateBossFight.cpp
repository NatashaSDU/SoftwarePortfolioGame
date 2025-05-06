#include "StateBossFight.h"


StateBossFight::StateBossFight(Opponent* _hero) : hero(_hero){}

StateBossFight::~StateBossFight()  {
    delete enemy;

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
        delete hero;
         context->ChangeState(std::static_pointer_cast<State>(std::make_shared<StateRetreatOffer>()));
    }
    else
    {

        GameOver(hero);

    }


}

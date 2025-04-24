#include "StateFight.h"


StateFight::StateFight(Opponent& enemy) {
    Opponent& hero= context->GetHero();
    hero.GetStatus();
    enemy.GetStatus();

    while (!hero.isDead() && !enemy.isDead()) {
        int heroAttack=hero.getAttack();
        int enemyAttack=enemy.getAttack();

        hero.damage(enemyAttack);
        enemy.damage(heroAttack);

        hero.GetStatus();
        enemy.GetStatus();

    }

    if(enemy.isDead())
    {
        context->RegisterVictory(enemy.GetXP());
        std::cout << "Du vandt!" << std::endl;

    }
    else
    {
       std::cout << "Du tabte!" << std::endl;
    }
    context->ChangeState(std::make_shared<StateRetreatOffer>());
}


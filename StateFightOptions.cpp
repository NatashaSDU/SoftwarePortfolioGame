#include "StateFightOptions.h"

StateFightOptions::StateFightOptions() {

    Opponent& enemy=context->SelectEnemy();
    enemy.GetDescription();
   context->ChangeState(std::make_shared<StateFight>(enemy));
}

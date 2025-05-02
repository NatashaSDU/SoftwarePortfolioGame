#include "StateFightOptions.h"

StateFightOptions::StateFightOptions() {


}
void StateFightOptions::OnStart() {
    if (ProgramStatusManager::GetProgramStatus() == ProgramStatus::Development) {
        std::cout << "In StateFightOptions" << std::endl;
    }
   std::cout << std::endl;
    Opponent* enemy = context->SelectEnemy();
    context->ChangeState(std::make_shared<StateFight>(enemy));
}


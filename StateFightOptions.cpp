#include "StateFightOptions.h"

StateFightOptions::StateFightOptions(Opponent* _hero,  CaveObject* _cave):hero(_hero), cave(_cave) {


}
void StateFightOptions::OnStart() {
    if (ProgramStatusManager::GetProgramStatus() == ProgramStatus::Development) {
        std::cout << "In StateFightOptions" << std::endl;
    }
   std::cout << std::endl;
    Opponent* enemy = cave->SelectEnemy();
    context->ChangeState(std::make_shared<StateFight>(hero, enemy, cave));
}


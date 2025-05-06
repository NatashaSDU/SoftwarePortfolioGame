#include "StateRetreatOffer.h"

StateRetreatOffer::StateRetreatOffer()
{


}

void StateRetreatOffer::OnStart(){
    if(ProgramStatusManager::GetProgramStatus() == ProgramStatus::Development)
    {
        std::cout << "In StateRetreatOffer"<< std::endl;

    };

    auto& input= RequestInput::GetInstance("Continue playing?");
    input.AddOption("Yes").AddOption("No");
    int selected = input.SelectedValue();


    switch(selected) {
    case 1:
        context->SelectCave();
        context->ChangeState(std::make_shared<StateFightOptions>());
        break;

    default:
        if(ProgramStatusManager::GetProgramStatus() == ProgramStatus::Development)
        {
            std::cout << "In default"<< std::endl;

        };
        context->Save();
        break;
    }
}

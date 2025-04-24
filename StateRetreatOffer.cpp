#include "StateRetreatOffer.h"

StateRetreatOffer::StateRetreatOffer()
{
   auto& input= RequestInput::GetInstance("Ønsker du at fortsætte spillet?");
    input.AddOption("Ja").AddOption("Nej");
    int selected = input.SelectedValue();

    switch(selected) {
    case 0:
        context->ChangeState(std::make_shared<StateFightOptions>());
        break;

    default:
        context->Save();
    }

}


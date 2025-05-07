#include "State.h"
#include "GameController.h"
#include "StateRetreatOffer.h"


State::~State() = default;

void State::SetContext(GameController* ctx) {
    context = ctx;
}


void State::GameOver(Opponent* hero, CaveObject* cave){
    delete cave;
    delete hero;
std::cout << "You lost!" << std::endl;
    std::cout << std::endl;
    context->ChangeState(std::static_pointer_cast<State>(std::make_shared<StateRetreatOffer>()));
}

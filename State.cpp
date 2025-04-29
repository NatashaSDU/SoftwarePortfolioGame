#include "State.h"

State::~State() = default;

void State::SetContext(GameController* ctx) {
    context = ctx;
}

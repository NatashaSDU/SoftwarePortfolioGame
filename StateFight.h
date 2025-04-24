#ifndef STATEFIGHT_H
#define STATEFIGHT_H


#include "Opponent.h"
#include "State.h"
#include "GameController.h"
#include "StateRetreatOffer.h"

class StateFight: public State{


public:
    StateFight(Opponent& enemy);

};

#endif // STATEFIGHT_H

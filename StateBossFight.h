#ifndef STATEBOSSFIGHT_H
#define STATEBOSSFIGHT_H

#include "Opponent.h"
#include "State.h"
#include "GameController.h"
#include "StateRetreatOffer.h"

class StateBossFight: public State{


public:
    StateBossFight(Opponent* _hero);
    ~StateBossFight();
    void OnStart();
private:
    Opponent* enemy;
    Opponent* hero;
};

#endif // STATEBOSSFIGHT_H

#ifndef STATEBOSSFIGHT_H
#define STATEBOSSFIGHT_H

#include "Opponent.h"
#include "State.h"
#include "GameController.h"
#include "StateRetreatOffer.h"

class StateBossFight: public State{


public:
    StateBossFight(Opponent* _hero, CaveObject* _cave );
    ~StateBossFight();
    void OnStart();
private:
    Opponent* enemy;
    Opponent* hero;
    CaveObject* cave;
};

#endif // STATEBOSSFIGHT_H

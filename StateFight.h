#ifndef STATEFIGHT_H
#define STATEFIGHT_H


#include "Opponent.h"
#include "State.h"
#include "GameController.h"

class StateRetreatOffer;
class StateFight: public State{


public:
    StateFight(Opponent* _hero, Opponent* _enemy,  CaveObject* _cave);
    ~StateFight();
      void OnStart();
private:
      Opponent* enemy;
    Opponent* hero;
      CaveObject* cave;
};

#endif // STATEFIGHT_H

#ifndef STATEFIGHT_H
#define STATEFIGHT_H


#include "Opponent.h"
#include "State.h"
#include "GameController.h"

class StateRetreatOffer;
class StateFight: public State{


public:
    StateFight(Opponent& _enemy);
      void OnStart();
private:
      Opponent& enemy;
};

#endif // STATEFIGHT_H

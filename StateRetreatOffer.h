#ifndef STATERETREATOFFER_H
#define STATERETREATOFFER_H
#include "State.h"
#include <memory>
#include "GameController.h"
#include "StateFightOptions.h"

class StateRetreatOffer: public State{



public:

    StateRetreatOffer();
private:
    void ContinueAdvendure();
};



#endif // STATERETREATOFFER_H

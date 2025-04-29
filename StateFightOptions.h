#ifndef STATEFIGHTOPTIONS_H
#define STATEFIGHTOPTIONS_H

#include "State.h"
#include "StateFight.h"
#include <memory>
#include "GameController.h"

class StateFightOptions: public State{


public:
StateFightOptions();
    void OnStart();
};

#endif // STATEFIGHTOPTIONS_H

#ifndef STATEFIGHTOPTIONS_H
#define STATEFIGHTOPTIONS_H

#include "State.h"
#include "StateFight.h"
#include <memory>
#include "GameController.h"

class StateFightOptions: public State{


public:
StateFightOptions(Opponent* _hero);
    void OnStart();

private:
    Opponent* hero;
};

#endif // STATEFIGHTOPTIONS_H

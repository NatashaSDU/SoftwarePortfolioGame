#ifndef STATEFIGHTOPTIONS_H
#define STATEFIGHTOPTIONS_H

#include "CaveObject.h"
#include "State.h"
#include "StateFight.h"
#include <memory>
#include "GameController.h"

class StateFightOptions: public State{


public:
StateFightOptions(Opponent* _hero,  CaveObject* _cave);
    void OnStart();

private:
    Opponent* hero;
    CaveObject* cave;
};

#endif // STATEFIGHTOPTIONS_H

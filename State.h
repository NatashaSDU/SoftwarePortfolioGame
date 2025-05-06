#ifndef STATE_H
#define STATE_H

#include "ProgramStatus.h"
#include "ProgramStatusManager.h"
#include "Opponent.h"

class GameController;
class State{
public:
  //  State();
    virtual ~State();
    void SetContext(GameController* ctx);

      virtual void OnStart() = 0;


  protected:
      GameController* context = nullptr;
      void GameOver(Opponent* hero);

};

#endif // STATE_H

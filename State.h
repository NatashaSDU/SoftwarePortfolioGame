#ifndef STATE_H
#define STATE_H

#include "CaveObject.h"

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
      void GameOver(Opponent* hero, CaveObject* cave);

};

#endif // STATE_H

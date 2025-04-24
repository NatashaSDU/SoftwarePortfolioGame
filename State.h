#ifndef STATE_H
#define STATE_H

class GameController;
class State{
public:
  //  State();
      virtual ~State() = default;
      void SetContext(GameController* ctx) {
          context = ctx;
      }


  protected:
      GameController* context = nullptr;

};

#endif // STATE_H

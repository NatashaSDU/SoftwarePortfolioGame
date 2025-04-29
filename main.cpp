#include "GameController.h"
#include "HeroProvider.h"
#include "ProgramStatus.h"
#include "StateRetreatOffer.h"
#include <iostream>
#include "Hero.h"

using namespace std;

int main()
{
    DataAccess dataAccess;
    HeroProvider provider(dataAccess);
    cout << "Hello World!" << endl;

    bool isPlaying=true;


    while(isPlaying)
    {
       Hero* hero = nullptr;
        auto& input = RequestInput::GetInstance("Do you want to:");


            input.AddOption("Make new hero")
            .AddOption("Load a new hero")
            .AddOption("Leave the game");

            switch(input.SelectedValue()) {
            case 1:
                if (hero != nullptr) delete hero;
                hero=new Hero(provider.MakeNewHero());
                { GameController controller(dataAccess,hero);}
                break;

            case 2:
                if (hero != nullptr) delete hero;
                hero=new Hero(provider.LoadHero());
                {

                  GameController controller(dataAccess,hero);
                }
                break;

            default:
                isPlaying=false;
                 break;
            }


            delete hero;
    }
    return 0;
}



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

        if(ProgramStatusManager::GetProgramStatus() == ProgramStatus::Development)
        {
            std::cout << "Main: Printer alle heltene"<< std::endl;
            dataAccess.PrintAllHeroes();

        };


       Hero* hero = nullptr;
        auto& input = RequestInput::GetInstance("Do you want to:");


            input.AddOption("Make new hero")
            .AddOption("Load an old hero")
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

                if(ProgramStatusManager::GetProgramStatus() == ProgramStatus::Development)
                {
                    std::cout << "Case 2: Print helt"<< std::endl;
                    hero->GetDescription();

                };
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



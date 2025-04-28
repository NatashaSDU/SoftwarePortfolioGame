#include "GameController.h"
#include "HeroProvider.h"
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
        auto& input = RequestInput::GetInstance("Ønsker du at:");


            input.AddOption("Lave en ny helt")
            .AddOption("Loade en tidligere helt")
            .AddOption("Forlade Spillet");

            switch(input.SelectedValue()) {
            case 0:
                hero=new Hero(provider.GetNewHero());

                break;

            case 1:
                hero=new Hero(provider.LoadHero());
            default:
                isPlaying=false;
            }

            GameController controller(dataAccess,hero);
            delete hero;
    }
    return 0;
}



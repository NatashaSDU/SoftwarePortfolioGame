#include "HeroProvider.h"


HeroProvider::HeroProvider(DataAccess& _access): access(_access){

}
Hero HeroProvider::GetNewHero()
{
    if(ProgramStatusManager::GetProgramStatus() == ProgramStatus::Development)
    {
         std::cout << "I GetNewHero";
    };


    std::string name;
    std::cout << "Indtast navnet på helten: ";
    std::getline(std::cin, name);
    return Hero(name); // OK: Returnerer som værdi
}
Hero HeroProvider::LoadHero(){

    if(ProgramStatusManager::GetProgramStatus() == ProgramStatus::Development)
    {
        std::cout << "I LoadHero";
    };

    std::string name;

    do {
        std::cout << "Indtast 1 for at fortsætte, 0 for at afslutte: ";
        std::getline(std::cin, name);
    } while (access.IsNameAvailable(name));

    return Hero(access.LoadCopiedHero(name));
}

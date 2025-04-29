#include "HeroProvider.h"


HeroProvider::HeroProvider(DataAccess& _access): access(_access){

}
Hero HeroProvider::MakeNewHero()
{
    if(ProgramStatusManager::GetProgramStatus() == ProgramStatus::Development)
    {
         std::cout << "In MakeNewHero"<< std::endl;
    };

     std::string name;
    do {
        std::cout << "Enter name of hero: ";
        std::getline(std::cin, name);
    } while (!access.IsNameAvailable(name));

    std::cout << "Enter the name of the hero: ";
    std::getline(std::cin, name);
    return Hero(name); // OK: Returnerer som værdi
}
Hero HeroProvider::LoadHero(){

    if(ProgramStatusManager::GetProgramStatus() == ProgramStatus::Development)
    {
        std::cout << "In LoadHero"<< std::endl;
    };

    std::string name;

    do {
        std::cout << "Enter 1 to continue, 0 for at afslutte: ";
        std::getline(std::cin, name);
    } while (access.IsNameAvailable(name));

    return Hero(access.LoadCopiedHero(name));
}

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
        std::cout << std::endl;
        std::cout << "Enter name of hero: "<< std::endl;
        std::getline(std::cin, name);
    } while (access.IsNameInUse(name));


    if(ProgramStatusManager::GetProgramStatus() == ProgramStatus::Development)
    {
        std::cout << "MakeNewHero: "<< name<< std::endl;

    };

   // std::cout << "Enter the name of the hero: ";

//    std::getline(std::cin, name);
    return Hero(name); // OK: Returnerer som værdi
}
Hero HeroProvider::LoadHero(){
        std::cout << std::endl;
    if(ProgramStatusManager::GetProgramStatus() == ProgramStatus::Development)
    {
        std::cout << "In LoadHero"<< std::endl;
    };


    return Hero(access.LoadCopiedHero());
}

#include "DataAccess.h"
#include <stdexcept>



void DataAccess::AddHero(Hero& _hero)
{
    heroes.push_back(_hero);
    if(ProgramStatusManager::GetProgramStatus() == ProgramStatus::Development)
    {
        std::cout << "DataAccess::AddHero, printer alle heltene"<< std::endl;
       PrintAllHeroes();

    };
}

void DataAccess::UpdateHero(Hero* _hero)
{
     if (_hero == nullptr) return;

    if(ProgramStatusManager::GetProgramStatus() == ProgramStatus::Development)
    {
        std::cout << "DataAccess::UpdateHero"<< std::endl;
    };
    if(IsNameInUse(_hero->GetName()))
    {
        for (auto& currentHero : heroes) {
            if (currentHero.GetName() == _hero->GetName()) {
                currentHero.SetLevel(_hero->GetLevel());
                currentHero.SetXP(_hero->GetXP());
            }
        }

    }
    else{
        AddHero(*_hero);
    }

    if(ProgramStatusManager::GetProgramStatus() == ProgramStatus::Development)
    {
        std::cout << "DataAccess::UpdateHero: Printer alle heltene"<< std::endl;
        PrintAllHeroes();

    };
}

Hero DataAccess::LoadCopiedHero() {

    auto& input = RequestInput::GetInstance("Select one of the heroes");

    for (const auto& hero : heroes) {
        input.AddOption(hero.GetName());
    }

    int selected = input.SelectedValue();


   return heroes[selected-1];

}

bool DataAccess::IsNameInUse(const std::string& _name) const{
    for (const auto& h :heroes) {
        if (h.GetName() == _name) {
            return true;
        }
    }
    return false;
}

void DataAccess::PrintAllHeroes() const{
    for (auto& currentHero : heroes) {
        currentHero.GetDescription();
    }
     std::cout << std::endl;
}

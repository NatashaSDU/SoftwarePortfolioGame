#include "DataAccess.h"
#include <stdexcept>



void DataAccess::AddHero(const Hero& _hero)
{
    heroes.push_back(_hero);
}

void DataAccess::UpdateHero(Hero* _hero)
{
     if (_hero == nullptr) return;

    if(ProgramStatusManager::GetProgramStatus() == ProgramStatus::Development)
    {
        std::cout << "DataAccess::UpdateHero"<< std::endl;
    };

    for (auto& currentHero : heroes) {
        if (currentHero.GetName() == _hero->GetName()) {
            currentHero.SetLevel(_hero->GetLevel());
            currentHero.SetXP(_hero->GetXP());
        }
    }
}

Hero DataAccess::LoadCopiedHero(const std::string& name) {
    for (const auto& h :heroes) {
        if (h.GetName() == name) {
            return h;
        }
    }
    throw std::runtime_error("Hero doesnt exist");
}

bool DataAccess::IsNameAvailable(std::string& _name){
    for (const auto& h :heroes) {
        if (h.GetName() == _name) {
            return false;
        }
    }
    return true;
}

#include "CaveObject.h"

CaveObject::CaveObject(const std::string& _name, int _gold): gold(_gold), name(_name){

}

CaveObject::~CaveObject(){

    for (auto& obj : remainingEnemies) {
        delete obj;
    }
}



void CaveObject::AddEnemy(Opponent* enemy){
    remainingEnemies.push_back(enemy);

}

bool CaveObject::MoreEnemies(){
    if(remainingEnemies.size()==0)
    {
        return false;
    }

    return true;
}


Opponent* CaveObject::SelectEnemy(){
    auto& input = RequestInput::GetInstance("Select an enemy to fight");

    for (const auto& enemy : remainingEnemies) {
        input.AddOption(enemy->GetName());
    }
    int index = input.SelectedValue() -1;

    Opponent* selectedEnemy = remainingEnemies[index];
    remainingEnemies.erase(remainingEnemies.begin() + index);
    return selectedEnemy;
}

void CaveObject::SetBoss(Opponent* _boss){
    boss=_boss;
}

Opponent* CaveObject::GetBoss() const{
    return boss;
}


int CaveObject::GetGold() const{
    return gold;
}
const std::string& CaveObject::GetName() const{
    return name;
}


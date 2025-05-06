#include "Cave.h"

Cave::Cave(const std::string& _name,int _gold):name(_name), gold(_gold) {};
Cave::~Cave(){
    delete boss;

    for (auto& obj : remainingEnemies) {
        delete obj;
    }
}
void Cave::AddEnemy(Opponent* enemy){
    remainingEnemies.push_back(enemy);

}

bool Cave::MoreEnemies(){
    if(remainingEnemies.size()==0)
    {
        return false;
    }

    return true;
}


Opponent* Cave::SelectEnemy(){
     auto& input = RequestInput::GetInstance("Select an enemy to fight");

    for (const auto& enemy : remainingEnemies) {
        input.AddOption(enemy->GetName());
    }
    int index = input.SelectedValue() -1;

    Opponent* selectedEnemy = remainingEnemies[index];
remainingEnemies.erase(remainingEnemies.begin() + index);
    return selectedEnemy;
}

void Cave::SetBoss(Opponent* _boss){
    boss=_boss;
}

Opponent* Cave::GetBoss() const{
    return boss;
}


int Cave::GetGold() const{
    return gold;
}
const std::string& Cave::GetName() const{
    return name;
}

#include "CaveFactory.h"

CaveFactory::CaveFactory(int _level):level(_level){};

CaveObject* CaveFactory::GetCave(){
    CaveObject* cave=new CaveObject(GetName(), GetGold());
    cave->SetBoss(GetBoss());
    return cave;
}

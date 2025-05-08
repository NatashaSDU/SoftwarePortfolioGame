#include "CaveFactory.h"

CaveFactory::CaveFactory(int _level):level(_level){};

CaveObject* CaveFactory::GetCave(){
    CaveObject* cave=new CaveObject(GetName(), GetGold());
    cave->SetBoss(GetBoss());
    return cave;
}

float CaveFactory::GetModifier(){
    if(level!=1)
    {
         return 1+level/100;
    }
    return 1;
}

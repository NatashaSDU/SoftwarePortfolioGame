#ifndef DRAGONMODIFIER_H
#define DRAGONMODIFIER_H
#include "IModifier.h"
#include <string>
#include <iostream>
#include <ostream>

class DragonModifier : public IModifier {

public:
  
	void VisitEnemy(Opponent* enemy)const override;



};
#endif // ENEMY_H
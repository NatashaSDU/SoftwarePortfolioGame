#ifndef IMODIFIER_H
#define IMODIFIER_H

class IModifier {


public:

    //void VisitEnemy(Opponent* enemy);

    virtual ~IModifier() = default;
    virtual void VisitEnemy(Opponent* enemy) const = 0;
};

#endif // IMODIFIER_H
#pragma once

#include "DragonModifier.h"
#include <random>
#include <ctime>

void DragonModifier::VisitEnemy(Opponent* enemy) const
{
    static std::mt19937 rng(static_cast<unsigned int>(std::time(nullptr))); // Random engine
    static std::uniform_int_distribution<int> dist(1, 100); // Random numbers 1–100

    int roll = dist(rng); // Generate random number

    if (roll <= 10) { // 10% chance
        std::cout << "The Dragon entered rage mode!\n";
    }
    else {
       
    }
}

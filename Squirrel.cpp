#include "Squirrel.h"

Squirrel::Squirrel(std::string pName) : Animal(pName, "Squirrel")
{
    nutsGathered = 0;
}

void Squirrel::gatherNuts()
{
    nutsGathered = nutsGathered * 0.5;
    nutsGathered += 10;
}

void Squirrel::eat()
{
    std::cout << name << " the Squirrel nibbles at the nuts they have gathered." << std::endl;
}

void Squirrel::sleep()
{
    std::cout << "The squirrel sleeps silently..." << std::endl;
}

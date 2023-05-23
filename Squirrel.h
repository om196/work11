#ifndef SQUIRREL_H
#define SQUIRREL_H

#include "Animal.h"

class Squirrel : public Animal
{
    int nutsGathered;

public:
    Squirrel(std::string pName);
    void gatherNuts();
    void eat() override;
    void sleep() override;
};

#endif

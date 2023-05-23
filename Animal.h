#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string name;
    std::string species;

public:
    Animal(std::string pName, std::string pSpecies);
    virtual void eat();
    virtual void sleep();
};

#endif

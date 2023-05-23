#include "Animal.h"

Animal::Animal(std::string pName, std::string pSpecies)
{
    name = pName;
    species = pSpecies;
}

void Animal::eat()
{
    std::cout << name << " the " << species << " eats some generic food" << std::endl;
}

void Animal::sleep()
{
    std::cout << "The generic animal sleeps... generically?" << std::endl;
}

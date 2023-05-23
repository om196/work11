#include "Tiger.h"

Tiger::Tiger(std::string pName) : Animal(pName, "Tiger")
{
    kills = 0;
}

void Tiger::hunt()
{
    kills++;
}

void Tiger::eat()
{
    std::cout << name << " the Tiger eats their meat voraciously!" << std::endl;
}

void Tiger::sleep()
{
    std::cout << "The tiger snores loudly as it sleeps." << std::endl;
}

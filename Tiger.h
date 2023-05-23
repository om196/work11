#ifndef TIGER_H
#define TIGER_H

#include "Animal.h"

class Tiger : public Animal
{
    int kills;

public:
    Tiger(std::string pName);
    void hunt();
    void eat() override;
    void sleep() override;
};

#endif

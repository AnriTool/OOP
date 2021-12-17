#ifndef DOG_H
#define DOG_H
#include "pet.h"

class Dog : public Pet
{
public:
    Dog();
    Dog(string name);
    void info();
    void sound();
};

#endif // DOG_H

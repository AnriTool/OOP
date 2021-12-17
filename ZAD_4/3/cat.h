#ifndef CAT_H
#define CAT_H
#include "pet.h"

class Cat : public Pet
{
public:
    Cat();
    Cat(string name);
    void info();
    void sound();
};
#endif // CAT_H

#ifndef COW_H
#define COW_H
#include "pet.h"


class Cow : public Pet
{
public:
    Cow();
    Cow(string name);
    void info();
    void sound();
};

#endif // COW_H

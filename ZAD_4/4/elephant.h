#ifndef ELEPHANT_H
#define ELEPHANT_H
#include "animal.h"


class Elephant : public Animal
{
public:
    Elephant();
    Elephant(string name);
    void info();
    void sound();
};

#endif // ELEPHANT_H

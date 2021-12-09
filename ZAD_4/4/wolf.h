#ifndef WOLF_H
#define WOLF_H
#include "animal.h"

class Wolf : public Animal
{
public:
    Wolf();
    Wolf(string name);
    void info();
    void sound();
};

#endif // WOLF_H

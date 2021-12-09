#ifndef TIGER_H
#define TIGER_H
#include "animal.h"

class Tiger : public Animal
{
public:
    Tiger();
    Tiger(string name);
    void info();
    void sound();
};
#endif // TIGER_H

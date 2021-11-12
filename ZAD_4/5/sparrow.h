#ifndef SPARROW_H
#define SPARROW_H
#include "bird.h"


class Sparrow : public Bird
{
public:
    Sparrow();
    Sparrow(string name);
    void info();
    void sound();
};

#endif // SPARROW_H

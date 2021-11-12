#ifndef CROW_H
#define CROW_H
#include "bird.h"


class Crow : public Bird
{
public:
    Crow();
    Crow(string name);
    void info();
    void sound();

};

#endif // CROW_H

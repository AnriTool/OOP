#ifndef PIGEON_H
#define PIGEON_H
#include "bird.h"

class Pigeon : public Bird
{
public:
    Pigeon();
    Pigeon(string name);
    void info();
    void sound();
};

#endif // PIGEON_H

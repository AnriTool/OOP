#ifndef CUBE_H
#define CUBE_H
#include "parallelepiped.h"

class Cube: public Parallelepiped
{
public:
    Cube();
    Cube(double x);
    void info();
};

#endif // CUBE_H

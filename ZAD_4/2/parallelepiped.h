#ifndef PARALLELEPIPED_H
#define PARALLELEPIPED_H
#include "figure.h"

class Parallelepiped: public Figure
{
public:
    double x,y,z;
    Parallelepiped();
    Parallelepiped(double x,double y, double z);
    void info();
    double V();
    double S();
};

#endif // PARALLELEPIPED_H

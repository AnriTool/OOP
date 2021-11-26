#ifndef SPHERE_H
#define SPHERE_H
#include "figure.h"


class Sphere : public Figure
{
public:
    Sphere();
    Sphere(double x);
    void info();
    double V();
    double S();

};

#endif // SPHERE_H

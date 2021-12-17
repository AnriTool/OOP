#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "figure.h"

class Triangle: public Figure
{
public:
    Triangle();
    Triangle(double x, double y,double z);
    void info();
    double S();
    double P();
};

#endif // TRIANGLE_H

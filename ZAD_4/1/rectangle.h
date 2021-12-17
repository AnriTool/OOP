#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "figure.h"

class Rectangle: public Figure
{
public:
    Rectangle();
    Rectangle(double x, double y);
    void info();
    double S();
    double P();
};

#endif // RECTANGLE_H

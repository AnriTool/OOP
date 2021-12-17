#ifndef CIRCLE_H
#define CIRCLE_H
#include "figure.h"

class Circle: public Figure
{
public:
    Circle();
    Circle(double x);
    void info();
    double S();
    double P();
};

#endif // CIRCLE_H

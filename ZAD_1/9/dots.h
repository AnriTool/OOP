#ifndef DOTS_H
#define DOTS_H

#include <iostream>

struct point
{
    double x;
    double y; // декартовые кординаты для точек
};
enum types {square = 1, rectangle, trapezoid, general};

double distance(point a, point b );

double Per(point dot1, point dot2, point dot3, point dot4);

void pointPrint(point a);

void Type(point a, point b, point c, point d);
#endif // DOTS_H

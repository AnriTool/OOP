#include "circle.h"

Circle::Circle():Figure()
{
}

Circle::Circle(double x):Figure(x,0,0)
{
}

void Circle::info()
{
    cout<<"this is Circle with Radius:" << values[0] << endl;
}

double Circle::S(){
    return (values[0]*values[0]*M_PI);
}

double Circle::P(){
    return (2*values[0]*M_PI);
}


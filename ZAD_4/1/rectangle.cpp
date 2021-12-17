#include "rectangle.h"

Rectangle::Rectangle():Figure()
{
}

Rectangle::Rectangle(double x, double y):Figure(x,y,0)
{
}

void Rectangle::info()
{
    cout<<"this is Rectangle with sides:" << values[0] << ", " << values[1] << endl;
}

double Rectangle::S(){
    return (values[0] * values[1]);
}

double Rectangle::P(){
    return ((values[0] + values[1]) * 2);
}

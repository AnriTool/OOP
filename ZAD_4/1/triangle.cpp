#include "triangle.h"

Triangle::Triangle():Figure()
{
}

Triangle::Triangle(double x, double y, double z):Figure(x,y,z)
{
}

void Triangle::info()
{
    cout<<"this is Triangle with sides:" << values[0] << ", " << values[1] << ", " << values[2] << endl;
}

double Triangle::S(){
    double pp = (this->P())/2;
    return (sqrt(pp*(pp-values[0])*(pp-values[1])*(pp-values[2])));
}

double Triangle::P(){
    return (values[0] + values[1] + values[2]);
}


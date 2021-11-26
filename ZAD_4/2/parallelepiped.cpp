#include "parallelepiped.h"

Parallelepiped::Parallelepiped():Figure()
{
    x = y = z = value;
}

Parallelepiped::Parallelepiped(double x,double y, double z)
{
    this->x = x; this->y = y; this->z = z;
}

void Parallelepiped::info()
{
    cout << "This is Parallelepiped, with x " << x << " y " << y << " z " << z << endl;
}

double Parallelepiped::S(){
    return (2*(x*y+x*z+z*y));
}

double Parallelepiped::V(){
    return (x*y*z);
}



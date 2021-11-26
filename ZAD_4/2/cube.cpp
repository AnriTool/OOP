#include "cube.h"

Cube::Cube():Parallelepiped()
{

}
Cube::Cube(double x)
{
    value = x;
    this->x = this->y = this->z = value;
}

void Cube::info()
{
    cout << "This is Cube, with side " << x << endl;
}




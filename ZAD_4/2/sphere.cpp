#include "sphere.h"

Sphere::Sphere():Figure()
{

}

Sphere::Sphere(double x):Figure(x)
{

}

void Sphere::info()
{
    cout << "This is sphere, radius " << value << "\n";
}

double Sphere::S(){
    return (4 * M_PI * value * value);
}

double Sphere::V(){
    return ((4 * M_PI * value * value * value)/3);
}

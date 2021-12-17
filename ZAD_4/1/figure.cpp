#include "figure.h"

Figure::Figure()
{
    values[0] = 0;
    values[1] = 0;
    values[2] = 0;
}

Figure::Figure(double x,double y,double z)
{
    values[0] = x;
    values[1] = y;
    values[2] = z;
}

void Figure::info()
{
    cout << "This is unknown figure with value's "<< values[0] << ", " << values[1] << "," << values[2] << endl;
}


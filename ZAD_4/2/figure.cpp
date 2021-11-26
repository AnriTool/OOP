#include "figure.h"

Figure::Figure()
{
    value = 0;
}

Figure::Figure(double x)
{
    value = x;
}

void Figure::info()
{
    cout << "This is unknown figure with value "<< value << endl;
}


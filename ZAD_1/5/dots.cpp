#include "dots.h"
#include <math.h>

/*
Описать функции, пересчитывающую декартовы координаты в полярные и наоборот.

Полярные в декартовы -
x = p * cos(a)
y = p * sin(a)
*/
using namespace std;

deck pol_to_deck(pol p)
{
    deck d;
    d.x = p.r * cos(p.a);
    d.y = p.r * sin(p.a);

    return d;
}


pol deck_to_pol(deck d)
{
    pol p;
    p.r = sqrt(d.x*d.x + d.y*d.y);
    p.a = atan2(d.y, d.x);

    return p;
}

/*
Описать функции (отдельно для декартовых и полярных координат), принимающую точку
в качестве параметра и «красиво» выводящую её на консоль.
*/

void print_deck(deck d)
{
    cout <<  "Coordinates : x= " << d.x << ", y = " << d.y << "\n";
}

void print_pol(pol p)
{
    cout << "Angle = " << p.a << ", radius " << p.r << "\n";
}




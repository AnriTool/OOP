/*
Описать типы-структуры «точка на плоскости в декартовых координатах» и «точка на
плоскости в полярных координатах».

Описать функции, пересчитывающую декартовы координаты в полярные и наоборот.

Описать функции (отдельно для декартовых и полярных координат), принимающую точку
в качестве параметра и «красиво» выводящую её на консоль.
*/

#include <iostream>
#include "dots.h"

using namespace std;

int main()
{
    deck dot1;
    pol dot2;
    dot1.x = 5.0;
    dot1.y = 3.0;

    print_deck(dot1);

    dot2 = deck_to_pol(dot1);

    print_pol(dot2);

    return 0;
}
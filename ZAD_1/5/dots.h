#ifndef DOTS_H
#define DOTS_H

#include<iostream>


/*
Описать типы-структуры «точка на плоскости в декартовых координатах» и «точка на
плоскости в полярных координатах».

*/
struct deck
{
    double x; //Декартовы координаты
    double y;
};

struct pol
{
    double r; //Полярные координаты(радиус и угол)
    double a;
};

deck pol_to_deck(pol p);
pol deck_to_pol(deck d);
void print_deck(deck d);
void print_pol(pol p);


#endif // DOTS_H

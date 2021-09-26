#ifndef DOTS_H
#define DOTS_H

#include<iostream>


/*
Описать типы-структуры «точка на плоскости в декартовых координатах» и «точка на
плоскости в полярных координатах».

*/
struct point
{
    double x; //Декартовы координаты
    double y;
};
//перечисление : замкнутая, вырожденная, обычная
enum types {closed, degenerate, ordinary};

//Объявляю функцию определения типа триугольника
int type(point *a, int n);

//Функция для длины между точками и кривой
double len(point a, point b);
double lineLen(point *a, int n);



void printPoint(point d);//"Красвивый" вывод точки


#endif // DOTS_H

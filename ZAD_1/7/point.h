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
//перечисление для задания тип треугольника: равнобедренный, равносторонний,общего вида
enum types {isosceles, equilateral, general};
//Объявляю функцию определения типа триугольника
int type(point p1, point p2, point p3);

//Функция для площади, полупериметра и длины между точками
double length(point a, point b);
double S(point a, point b, point c);



void printPoint(point d);//"Красвивый" вывод точки


#endif // DOTS_H

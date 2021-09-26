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
//перечисление для задания вида треугольника: остроугольный, прямоугольный,тупоугольный.
enum types {acute, rectangular,obtuse};
//Объявляю функцию определения типа триугольника
int type(point p1, point p2, point p3);
//Функция для периметра и длины между точками
double length(point a, point b);
double Per(point a, point b, point c);



void printPoint(point d);//"Красвивый" вывод точки


#endif // DOTS_H

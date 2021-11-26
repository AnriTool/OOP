#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>
#include <math.h>
using namespace std;

/*

Определить класс «Геометрическая фигура» и два его класса-потомка «Шар» и «Параллелепипед».

У параллелепипеда будет производный класс – «Куб».

Определить конструкторы классов и метод info(), выводящий данные об объекте.

В базовом классе объявить чистые виртуальные функции для вычисления объёма и площади поверхности фигуры.

Реализовать эти функции в классах-потомках.

Продемонстрировать возможности их вызова как виртуальных функций для указателя на базовый класс

*/

class Figure
{
public:
    double value;
    Figure();
    Figure(double x);
    void info();
    virtual double S() = 0;
    virtual double V() = 0;
};

#endif // FIGURE_H

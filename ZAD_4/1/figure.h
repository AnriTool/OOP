#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>
#include <math.h>
using namespace std;

/*

Определить класс «Геометрическая фигура» и три его класса-потомка «Треугольник», «Круг» и «Прямоугольник».

Определить конструкторы классов и метод info(), выводящий данные об объекте.

В базовом классе объявить чистые виртуальные функции для вычисления периметра и площади фигуры.

Реализовать эти функции в классах-потомках.

Продемонстрировать возможности их вызова как виртуальных функций для указателя на базовый класс.

*/

class Figure
{
public:
    double values[3];
    Figure();
    Figure(double x,double y, double z);
    void info();
    virtual double S() = 0;
    virtual double P() = 0;
};

#endif // FIGURE_H

#ifndef VEC_H
#define VEC_H
#include <iostream>
#include <math.h>
using namespace std;


/*

Описать класс «вектор на плоскости», хранящий координаты х, у.

Предусмотреть конструкторы, инициализирующие свойства объектов переданными
данными и значениями по умолчанию.

Предусмотреть метод info(), выводящий на экран информацию об объекте.

Описать следующие методы класса: вычисление длины вектора, сложение текущего
вектора с переданным в параметре, скалярное произведение текущего вектора с
переданным в параметре.

*/


class Vec
{
private:
    double x;
    double y;
public:
    Vec();
    Vec(double x, double y);
    void info();
    double length();
    void add(Vec a);
    double mult(Vec a);
};

#endif // VEC_H

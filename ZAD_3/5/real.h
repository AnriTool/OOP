#ifndef REAL_H
#define REAL_H

#include <iostream>
using namespace std;
/*
Описать класс «массив вещественных чисел».

В классе предусмотреть методы удаления и добавления элементов.

Предусмотреть метод info(), выводящий на экран информацию об объекте.

Описать перегруженный оператор «*», выполняющий умножение всех элементов массива
на число.

Описать перегруженный оператор «/», выполняющий деление всех элементов массива на
число.

 */

class Real
{
private:
    double a[10];
    int i;
public:
    Real();
    void info();
    Real operator*(double x);
    Real operator/(double x);
    void add(double x);
    void del();
};

#endif // REAL_H

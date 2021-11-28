#ifndef REAL_H
#define REAL_H

#include <iostream>
using namespace std;
/*
Описать класс «массив вещественных чисел».

В классе предусмотреть методы удаления и добавления элементов.

Предусмотреть метод info(), выводящий на экран информацию об объекте.

Описать перегруженный оператор «+», выполняющий добавление элемента в массив.

Описать перегруженный оператор «--» (префиксную и постфиксную формы),
выполняющий удаление последнего элемента из массива.

 */

class Real
{
private:
    double a[10];
    int i;
public:
    Real();
    void info();
    void operator+(double x);
    void operator--(int);
    void operator--();
    void add(double x);
    void del();
};

#endif // REAL_H

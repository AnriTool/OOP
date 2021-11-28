#ifndef REAL_H
#define REAL_H

#include <iostream>
using namespace std;
/*
Описать класс «массив вещественных чисел».

В классе предусмотреть методы удаления и добавления элементов.

Предусмотреть метод info(), выводящий на экран информацию об объекте.

Описать перегруженный оператор «+», выполняющий объединение двух массивов.

Описать перегруженный оператор «%», выполняющий проверку элемента на вхождение в
массив.

 */

class Real
{
private:
    double a[20];
    int i;
public:
    Real();
    void info();
    void operator+(Real x);
    bool operator%(double x);
    void add(double x);
    void del();
};

#endif // REAL_H

#ifndef REAL_H
#define REAL_H

#include <iostream>
using namespace std;
/*
Описать класс «массив вещественных чисел».

В классе предусмотреть методы удаления и добавления элементов.

Предусмотреть метод info(), выводящий на экран информацию об объекте.

Описать перегруженный оператор «!», выполняющий умножение всех элементов массива
на -1.

Описать перегруженный оператор «[ ]», возвращающий элемент по его номеру.

 */

class Real
{
private:
    double a[10];
    int i;
public:
    Real();
    void info();
    double operator[](int x);
    void operator!();
    void add(double x);
    void del();
};

#endif // REAL_H

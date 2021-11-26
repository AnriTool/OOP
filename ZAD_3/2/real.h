#ifndef REAL_H
#define REAL_H
#include <iostream>
using namespace std;
/*

Описать класс «массив вещественных чисел».
В классе предусмотреть методы удаления и добавления элементов.
Предусмотреть метод info(), выводящий на экран информацию об объекте.
Описать перегруженный оператор «==», выполняющий сравнение двух массивов с точки
зрения их равенства.
Описать перегруженный оператор «!=», выполняющий сравнение двух массивов с точки
зрения их неравенства.


*/

class Real
{
public:
    double mass[10];
    int i;
    Real();
    void info();
    void add(double x);
    void del();
    bool operator==(Real x);
    bool operator!=(Real x);
};

#endif // REAL_H

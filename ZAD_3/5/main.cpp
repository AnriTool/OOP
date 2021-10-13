#include <iostream>
#include "real.h"
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










int main()
{
    Real mass1, mass2;
   // int x;

    mass1.info();
    mass1.add(8.4);mass1.add(5);mass1.add(3.5);mass1.add(8);mass1.add(4);
    mass1.info();
    mass1.del();mass1.del();
    mass1.info();
    mass2 = mass1 * 5;
    mass2.info();
    mass2 = mass2 / 5;
    mass2.info();




    return 0;
}

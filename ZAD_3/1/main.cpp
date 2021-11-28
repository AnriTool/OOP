#include <iostream>
#include "real.h"
using namespace std;

/*
Описать класс «массив вещественных чисел».

В классе предусмотреть методы удаления и добавления элементов.

Предусмотреть метод info(), выводящий на экран информацию об объекте.

Описать перегруженный оператор «+», выполняющий объединение двух массивов.

Описать перегруженный оператор «%», выполняющий проверку элемента на вхождение в
массив.

 */










int main()
{
    Real mass1,mass2;
   // int x;

    mass1.info();
    mass1.add(8.4);mass1.add(5);mass1.add(3.5);mass1.add(8);mass1.add(4);
    mass1.info();
    mass2.add(4.4);mass2.add(3.5);mass2.add(2.5);mass2.add(1);mass1.add(5);
    mass2.info();
    mass1 + mass2;
    mass1.info();
    //mass1.del();mass1.del();
    // mass1.info();
    if (mass1 % 8.4)
        cout<<"8.4 in mass1"<<endl;



    return 0;
}

#include <iostream>
#include "real.h"
using namespace std;

/*
Описать класс «массив вещественных чисел».

В классе предусмотреть методы удаления и добавления элементов.

Предусмотреть метод info(), выводящий на экран информацию об объекте.

Описать перегруженный оператор «!», выполняющий умножение всех элементов массива
на -1.

Описать перегруженный оператор «[ ]», возвращающий элемент по его номеру.

 */










int main()
{
    Real mass1, mass2;
   // int x;

    mass1.info();
    mass1.add(8.4);mass1.add(5);mass1.add(3.5);mass1.add(8);mass1.add(4);
    mass1.info();
    !mass1;
    mass1.info();
    cout<<mass1[0]<<endl;




    return 0;
}

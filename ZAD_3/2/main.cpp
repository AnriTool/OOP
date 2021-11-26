#include <iostream>
#include "real.h"
/*

Описать класс «массив вещественных чисел».
В классе предусмотреть методы удаления и добавления элементов.
Предусмотреть метод info(), выводящий на экран информацию об объекте.
Описать перегруженный оператор «==», выполняющий сравнение двух массивов с точки
зрения их равенства.
Описать перегруженный оператор «!=», выполняющий сравнение двух массивов с точки
зрения их неравенства.


*/
int main()
{
   Real mass1,mass2;
   mass1.add(3.2);mass1.add(1.5);mass1.add(4.6);mass1.add(5.1);
   mass2.add(3.2);mass2.add(1.5);mass2.add(4.6);mass2.add(5.1);
   mass1.info(); mass2.info();
   if (mass1 == mass2)
       cout<<"m1 == m2" << endl;
   if (mass1 != mass2)
       cout<<"m1 != m2" << endl;

    mass1.del();
    mass2.add(5.2);
    mass1.info(); mass2.info();
   if (mass1 == mass2)
       cout<<"m1 == m2" << endl;
   if (mass1 != mass2)
       cout<<"m1 != m2" << endl;

    return 0;
}

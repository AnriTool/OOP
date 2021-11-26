/*
* Определить шаблоны функций, осуществляющих сортировку элементов массива по возрастанию и по убыванию 
* (то есть два шаблона функций). Продемонстрировать работу шаблонов на массивах объектов как встроенного типа, 
* так и собственного класса. Для этого создать собственный класс и перегрузить в нём нужные функции-операции.




Определить шаблоны функций, возвращающих сумму и произведение элементов
массива (т.е. два шаблона функций). Продемонстрировать работу шаблонов на массивах
объектов как встроенного типа, так и собственного класса. Для этого создать собственный
класс и перегрузить в нём нужные функции-операции






*/

#include <iostream>
#include "mytemplates.h"
#include "person.h"

using namespace std;

int main()
{
    int arrInt[5] = {10, 5, -3, 8, 15};
    Person arrPerson[5] = {
                              Person("Vasya", 1986),
                              Person("Olya", 2003),
                              Person("Misha", 2012),
                              Person("Dima", 1970),
                              Person("Natasha", 1994),
                          };
    int res1,res2;
    Person p1(" ",1),p2(" ",1);
    res1 = mult(arrInt,5);
    res2 = sum(arrInt,5);
    cout << res1 << endl;
    cout << res2 << endl;
    p1 = mult(arrPerson,5);
    p2 = sum(arrPerson,5);
    p1.info();
    p2.info();



    return 0;
}

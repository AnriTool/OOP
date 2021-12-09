/*
Определить шаблоны функций, возвращающих среднее арифметическое и
среднеквадратичное отклонение элементов массива (т.е. два шаблона функций).
Продемонстрировать работу шаблонов на массивах объектов как встроенного типа, так и
собственного класса. Для этого создать собственный класс и перегрузить в нём нужные
функции-операции.
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

    cout << "Arithmetic mean " << ArifMean(arrInt,5) << endl;
    cout << "Standard deviation " << StandDev(arrInt,5) << endl;

    cout << "Arithmetic mean " << ArifMean(arrPerson,5) << endl;
    cout << "Standard deviation " << StandDev(arrPerson,5) << endl;



    return 0;
}


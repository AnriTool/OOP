/*
* Определить шаблоны функций, осуществляющих сортировку элементов массива по возрастанию и по убыванию 
* (то есть два шаблона функций). Продемонстрировать работу шаблонов на массивах объектов как встроенного типа, 
* так и собственного класса. Для этого создать собственный класс и перегрузить в нём нужные функции-операции.




Определить шаблоны функций, возвращающих количество элементов массива, которые
меньше и больше заданного (т.е. два шаблона функций). Продемонстрировать работу
шаблона на массивах объектов как встроенного типа, так и собственного класса. Для этого
создать собственный класс и перегрузить в нём нужные функции-операции.






*/

#include <iostream>
#include "mytemplates.h"
#include "person.h"

using namespace std;

int main()
{
    int arrInt[5] = {10, 5, -3, 8, 15};
    Person arrPerson[5] = {
                              Person("Vasya", 1869),
                              Person("Olya", 2003),
                              Person("Misha", 2012),
                              Person("Dima", 1970),
                              Person("Natasha", 1994),
                          };
    int size = 5;
    int number = 6;
    Person Kirill("Kirill", 2000);

    cout<<More(arrInt, size, number)<<endl;
    cout<<Less(arrInt, size, number)<<endl;

    cout<< More(arrPerson, size, Kirill)<<endl;
    cout<<Less(arrPerson, size, Kirill)<<endl;

    return 0;
}


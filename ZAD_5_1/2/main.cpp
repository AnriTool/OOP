/*
Определить шаблон функции, осуществляющей поиск элемента в массиве. Функция
возвращает -1, если объект не найден, и индекс элемента, если объект найден.

Продемонстрировать работу шаблона на массивах объектов как встроенного типа, так и
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
                              Person("Vasya", 1869),
                              Person("Olya", 2003),
                              Person("Misha", 2012),
                              Person("Dima", 1970),
                              Person("Natasha", 1994),
                          };
    int size = 5;
    int number = 6;
    Person Natali("Natasha", 1994);

    cout<<"Index = "<<Find(arrInt,size,number)<<endl;

    cout<<"Index = "<<Find(arrPerson,size,Natali)<<endl;





    return 0;
}


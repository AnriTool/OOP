/*
Определить шаблон функции, осуществляющей поиск элемента в массиве. Функция
возвращает 0, если объект не найден, и 1, если объект найден. Продемонстрировать
работу шаблона на массивах объектов как встроенного типа, так и собственного класса.
Для этого создать собственный класс и перегрузить в нём нужные функции-операции.
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
    int number = 5;
    Person Natali("Natasha", 1994);

    if (Find(arrInt,size,number))
        cout<<" Finded!" <<endl;

    if (Find(arrPerson,size,Natali))
        cout<<" Finded!" <<endl;





    return 0;
}


/*
* Определить шаблоны функций, осуществляющих сортировку элементов массива по возрастанию и по убыванию 
* (то есть два шаблона функций). Продемонстрировать работу шаблонов на массивах объектов как встроенного типа, 
* так и собственного класса. Для этого создать собственный класс и перегрузить в нём нужные функции-операции.
*/

#include <iostream>
#include "mytemplates.h"
#include "person.h"

using namespace std;

int main()
{
    int arrInt[5] = {10, 5, -3, 8, 15};
    Person arrPerson[5] = {
                              Person("Vasya", 86),
                              Person("Olya", 3),
                              Person("Misha", 12),
                              Person("Dima", 70),
                              Person("Natasha", 94),
                          };
    int size = 5;

    kv(arrPerson, size);
    kub(arrInt, size);
    for (int i=0;i<5; i++)
        arrPerson[i].info();


    for (int i=0;i<5; i++)
        cout << arrInt[i]<< " ";
    cout << endl;



    return 0;
}


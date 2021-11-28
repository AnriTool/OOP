/*
 * Описать шаблон класса для хранения данных. Данные должны храниться, например, в виде массива.
 * Шаблон должен включать в себя функции добавления данных, удаления данных, вывода данных на консоль ( info() )
 * и метод, осуществляющий  сортировку элементов по возрастанию. Продемонстрировать работу шаблона на объектах
 * как встроенного типа, так и собственного класса. Для этого создать собственный класс и перегрузить в нём
 * нужные функции-операции
 */




/*
Описать шаблон класса для хранения данных. Данные должны храниться, например, в виде массива.

Шаблон должен включать в себя функции добавления данных, удаления данных, вывода данных на консоль ( info() ).

При этом добавление и удаление данных должно сохранять упорядоченность массива по убыванию.

Предусмотреть обработку следующих исключений: добавление данных в заполненный массив, удаление данных из
пустого массива, добавление в массив уже существующего элемента.

Продемонстрировать работу шаблона на объектах как встроенного типа, так и собственного класса.

Для этого создать собственный класс и перегрузить в нём нужные функции-операции.

 */


#include <iostream>
#include "mytemplates.h"
#include "person.h"

using namespace std;

int main()
{
    Container<int> contInt;

    contInt.add(5);
    contInt.add(4);
    contInt.add(3);
    contInt.add(23);
    contInt.add(1);
    contInt.add(52);
    contInt.add(7);
    contInt.info();

    contInt.del();
    contInt.del();
    contInt.info();

    contInt.info();


    Container<Person> contPerson;

    contPerson.add(Person("Ivan", 1984));
    contPerson.add(Person("Petr", 1988));
    contPerson.add(Person("Natasha", 2014));
    contPerson.add(Person("Olga", 2010));
    contPerson.add(Person("Vasily", 2001));
    contPerson.add(Person("Timofey", 1999));
    contPerson.add(Person("Kostya", 2005));
    contPerson.info();

    contPerson.del();
    contPerson.del();
    contPerson.info();

    // Тестируем исключения
        try
        {
            contInt.add(11);
            contInt.add(61);
            contInt.add(51);
            contInt.add(15);
            contInt.add(24);
            contInt.add(42);
            contInt.add(43);

        }
        catch (Full)
        {
            std::cout << "Contaner is full!" << "\n";
        }

        try
        {
            Container<float> contFloat;
            contFloat.add(0.5);
            contFloat.del();
            contFloat.del();
        }
        catch (Empty)
        {
            std::cout << "Contaner is empty!" << "\n";
        }

        try
        {
            Container<float> contFloat;
            contFloat.add(0.5);
            contFloat.add(0.5);
            contFloat.add(0.5);
        }
        catch (Equal)
        {
            std::cout << "Contaner with equal elements!" << "\n";
        }

    return 0;
}


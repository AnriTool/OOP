/*

Описать класс для хранения данных (контейнер). Данные должны храниться, например, в виде массива.
Класс должен включать в себя функции добавления данных, удаления данных, вывода данных на консоль ( info() ).

Реализовать итератор для перебора данных контейнера следующим образом:

чтобы он перебирал элементы в порядке их добавления в контейнер, при этом перебирал бы каждый второй элемент, начиная с нулевого, то есть
возвращал бы только элементы с чётными индексами.
Итератор должен быть двунаправленным. Продемонстрировать работу шаблона на объектах как встроенного типа, так и собственного класса.

Для этого создать собственный класс и перегрузить в нём нужные функции-операции.




 */

#include <iostream>
#include "container.h"
#include "railcar.h"

using namespace std;

int main()
{
    //Заполняю контейнер стандартными значениями
    Cont<int> s1;
    s1.add(0); s1.add(1);
    s1.add(2); s1.add(3);
    s1.add(4); s1.add(5);
    s1.add(6); s1.add(7);
    s1.add(8); s1.add(9);
    s1.add(10);

    s1.info();
    // Делаем цикл с использованием итератора контейнера s1
    for (Cont<int>::iterator it = s1.begin(); it < s1.end(); ++it)
        cout << *it << " ";

    cout << endl;
    for (Cont<int>::iterator it = s1.end(); it > s1.begin(); --it)
        cout << *it << " ";
    cout << endl;

    //Заполняю контейнер собственным классом
    Cont<Railcar> r1;
    r1.add(Railcar("Luckoil", CARGO));
    r1.add(Railcar("Prigorod", PASSENGER));
    r1.add(Railcar("Gazprom", CARGO));
    r1.add(Railcar("NNK", CARGO));
    r1.add(Railcar("Meshgorod", PASSENGER));
    r1.add(Railcar("Metro", PASSENGER));

    r1.info();
    // Делаем цикл с использованием итератора контейнера r1
    Railcar rail; //temp
    for (Cont<Railcar>::iterator it = r1.begin(); it < r1.end(); ++it){
        rail = *it;
        rail.info();
    }

    for (Cont<Railcar>::iterator it = r1.end(); it > r1.begin(); --it){
        rail = *it;
        rail.info();
    }

    return 0;
}


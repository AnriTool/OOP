/*

Описать класс для хранения данных (контейнер). Данные должны храниться, например,
в виде массива. Класс должен включать в себя функции добавления данных, удаления
данных, вывода данных на консоль ( info() ).

Реализовать итератор для перебора данных
контейнера так, чтобы он перебирал элементы в порядке их возрастания, при этом
игнорировались бы повторяющиеся значения, то есть если следующий элемент массива
равен предыдущему, то итератор возвращает не его, а пытается найти следующий по
значению элемент. Итератор должен быть двунаправленным.

Продемонстрировать работу шаблона на объектах как встроенного типа, так и собственного класса.
Для этого создать собственный класс и перегрузить в нём нужные функции-операции.

 */

#include <iostream>
#include "container.h"
#include "book.h"

using namespace std;

int main()
{
    //Заполняю контейнер стандартными значениями
    Cont<int> s1;
    s1.add(0); s1.add(1);
    s1.add(2); s1.add(2);
    s1.add(8); s1.add(1);
    s1.add(6); s1.add(4);
    s1.add(1); s1.add(9);
    s1.add(10);

    cout<<"------INFO------" << endl;
    s1.info();
    cout<<"------ITERATOR------" << endl;
    // Делаем цикл с использованием итератора контейнера s1
    for (Cont<int>::iterator it = s1.begin(); it < s1.end(); ++it)
        cout << *it << " ";

    cout << endl;
    for (Cont<int>::iterator it = s1.end(); it > s1.begin(); --it)
        cout << *it << " ";
    cout << endl;

    //Заполняю контейнер собственным классом
    Cont<Book> r1;
       r1.add(Book("Hyperion", "Dan Simmons"));
       r1.add(Book("Endimion", "Dan Simmons"));
       r1.add(Book("Dune", "Frank Herbert"));
       r1.add(Book("I, robot", "Isaak Asimov"));
       r1.add(Book( "The Call of Cthulhu", "Howard Lovecraft"));
       r1.add(Book("The Shadow over Innsmouth", "Howard Lovecraft"));

    cout<<"------INFO------" << endl;
    r1.info();
    // Делаем цикл с использованием итератора контейнера r1
    cout<<"------ITERATOR------" << endl;
    Book rail; //temp
    for (Cont<Book>::iterator it = r1.begin(); it < r1.end(); ++it){
        rail = *it;
        rail.info();
    }
    cout<<"--------------------" << endl;
    for (Cont<Book>::iterator it = r1.end(); it > r1.begin(); --it){
        rail = *it;
        rail.info();
    }

    return 0;
}


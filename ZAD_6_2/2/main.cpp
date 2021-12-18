/*
Описать класс «Книга». Написать программу моделирования работы библиотеки.
Программа должна обеспечивать начальное формирование данных о всех книгах в
библиотеке в виде списка (шаблонный класс list). Кроме того, программа должна
обеспечивать имитацию выдачи книги читателю: вводится номер книги, программа
удаляет данные об этой книге из списка книг, находящихся в библиотеке и записывает
данные в список книг, находящихся на руках. Для представления необходимых списков
использовать шаблонный класс list.
*/

#include<iostream>
#include"book.h"
#include<list>

using namespace std;

int main()
{
    list<Book> inBible;
    list<Book> inHand;
    std::string name;
    inBible.push_back(Book("Hyperion", "Dan Simmons"));
    inBible.push_back(Book("Endimion", "Dan Simmons"));
    inBible.push_back(Book("Dune", "Frank Herbert"));
    inBible.push_back(Book("I, robot", "Isaak Asimov"));
    inBible.push_back(Book( "The Call of Cthulhu", "Howard Lovecraft"));
    inBible.push_back(Book("The Shadow over Innsmouth", "Howard Lovecraft"));

    cout << "Input Book name to give it away (or commands \"close\" commandm to close)" << endl;
    getline(cin,name);
do{
    // Просим пользователя ввести номер автобуса для выхода из парка



        // Ищем нужную книгу, если она есть включаем его в список выданных
    for (list<Book>::iterator it = inBible.begin(); it != inBible.end(); it++)
    {
        if (it->name == name)
        {
            inHand.push_back(*it);

        }
    }
    inBible.remove(Book(name,"NONE"));

    // Вывод
    cout << "----Bookes in bible----\n";
    for (list<Book>::iterator it = inBible.begin(); it != inBible.end(); it++)
    {
        it->info();
    }
    cout << "----Bookes in hands----\n";
    for (list<Book>::iterator it = inHand.begin(); it != inHand.end(); it++)
    {
        it->info();
    }
    cout << endl;

    cout << "Input Book name to give it away (or commands \"close\" commandm to close)" << endl;
    getline(cin,name);

 } while(name != "close");

    return 0;
}

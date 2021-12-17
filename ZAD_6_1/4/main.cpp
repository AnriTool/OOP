/*
. Определить класс «Книга», данные которого включают название книги, автора и число
страниц. Написать функцию, формирующую по заданному множеству (шаблонный класс
set) объектов класса двустороннюю очередь (шаблонный класс deque) из элементов
множества. В двустороннюю очередь включаются книги определенного автора.
 */


#include <iostream>
#include "book.h"

using namespace std;

int main()
{
    Book b1;
    Book b2("Hyperion", "Dan Simmons", 250);
    Book b3("Endimion", "Dan Simmons", 200);
    Book b4("Dune", "Frank Herbert", 500);
    Book b5("I, robot", "Isaak Asimov", 450);


    std::set<Book> bookList;
    std::deque<Book> bookSet;

    bookList.insert(b1);
    bookList.insert(b2);
    bookList.insert(b3);
    bookList.insert(b4);
    bookList.insert(b5);

    for (std::set<Book>::iterator it = bookList.begin(); it != bookList.end(); it++)
    {
        it->info();
    }

    std::cout << "----------------" << "\n";

    bookSet = getBooksOfAuthor(bookList, "Dan Simmons");

    for (std::deque<Book>::iterator it = bookSet.begin(); it != bookSet.end(); it++)
    {
        it->info();
    }


    return 0;
}


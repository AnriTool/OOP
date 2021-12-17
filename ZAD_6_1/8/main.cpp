/*
Определить класс «Книга», данные которого включают название книги, автора и число
страниц. Написать функцию, формирующую по заданному вектору (шаблонный класс
vector) объектов класса «Книга» список (шаблонный класс list) из элементов вектора. В
список включаются книги определенного автора.
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


    std::vector<Book> bookList;
    std::list<Book> bookSet;

    bookList.push_back(b1);
    bookList.push_back(b2);
    bookList.push_back(b3);
    bookList.push_back(b4);
    bookList.push_back(b5);

    for (std::vector<Book>::iterator it = bookList.begin(); it != bookList.end(); it++)
    {
        it->info();
    }

    std::cout << "----------------" << "\n";

    bookSet = getBooksOfAuthor(bookList, "Dan Simmons");

    for (std::list<Book>::iterator it = bookSet.begin(); it != bookSet.end(); it++)
    {
        it->info();
    }


    return 0;
}


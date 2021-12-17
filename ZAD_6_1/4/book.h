#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <set>
#include <deque>

class Book
{
public:
    std::string title;
    std::string author;
    int pageNumber;
    Book();
    Book(std::string title, std::string author, int pageNumber);
    void info() const; // для обращения через элемент контейнера set метод должен быть константным
    bool operator < (Book b) const; // для размещения элементов в контейнере set нужно определить оператор <
};

std::deque<Book> getBooksOfAuthor(std::set<Book> listOfBook, std::string author);

#endif // BOOK_H

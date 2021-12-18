#ifndef BOOK_H
#define BOOK_H

#include <iostream>

class Book
{
    public:
    std::string name;
    std::string author;
    Book();
    Book(std::string name, std::string author);
    bool operator < (Book b) const;
    bool operator ==(Book b) const;
    void info() const;
};

#endif // BOOK_H

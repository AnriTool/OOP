#ifndef Book_H
#define Book_H

#include <iostream>


enum Type {NONE,CARGO,PASSENGER};


class Book
{
    public:
    std::string name;
    std::string author;
    Book();
    Book(std::string name, std::string author);
    bool operator< (Book b);
    bool operator> (Book b);
    bool operator== (Book b);
    bool operator!= (Book b);
    void info() const;
    friend std::ostream& operator<< (std::ostream &out, const Book &bok);
};

#endif // Book_H

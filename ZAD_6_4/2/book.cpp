#include "book.h"

Book::Book()
{
    name = "NO NAME";
    author = "NO AUTHOR";
}

Book::Book(std::string name, std::string author)
{
    this->name = name;
    this->author = author;
}

bool Book::operator< (Book b)
{
    return (name < b.name);
}

bool Book::operator> (Book b)
{
    return (name > b.name);
}

bool Book::operator == (Book b)
{
    return (name == b.name);
}

bool Book::operator != (Book b)
{
    return (name != b.name);
}


void Book::info() const
{
    std::cout << author << ", " << name << "\n";
}

std::ostream& operator<< (std::ostream &out, const Book &bok)
{
    out << bok.name;

    return out;
}

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

bool Book::operator < (Book b) const
{
    return (name < b.name);
}

bool Book::operator == (Book b) const
{
    return (name == b.name);
}

void Book::info() const
{
    std::cout << author << ", " << name << "\n";
}


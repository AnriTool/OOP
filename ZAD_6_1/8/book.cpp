#include "book.h"

Book::Book()
{
    title = "NO TITLE";
    author = "NO AUTHOR";
    pageNumber = 0;
}

Book::Book(std::string title, std::string author, int pageNumber)
{
    this->title = title;
    this->author = author;
    this->pageNumber = pageNumber;
}

void Book::info() const
{
    std::cout << author.c_str() << " " << title.c_str() << ", " << pageNumber << "pp.\n";
}

bool Book::operator < (Book b) const
{
    if (author != b.author)
    {
        return author < b.author;
    }
    else
    {
        return title < b.title;
    }
}

std::list<Book> getBooksOfAuthor(std::vector<Book> listOfBook, std::string author)
{
    std::list<Book> bookSet;

    for (std::vector<Book>::iterator it = listOfBook.begin(); it != listOfBook.end(); it++)
    {
        if(it->author == author)
        {
            bookSet.push_back(*it);
        }
    }

    return bookSet;
}

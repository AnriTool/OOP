#ifndef PERSON_H
#define PERSON_H
#include <iostream>

class Person
{
public:
    std::string name;
    int birthYear;
    Person();
    Person(std::string name, int birthYear);
    bool operator<(Person p);
    bool operator>(int p);
    bool operator<(int p);
    bool operator!=(Person p);
    void info();
    operator char*();
    int operator*(int c);
};

#endif // PERSON_H

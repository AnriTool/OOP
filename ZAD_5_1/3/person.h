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
    bool operator>(Person p);
    void info();
};

#endif // PERSON_H

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
    Person operator+(Person p);
    double operator+(double d);
    double operator-(double d);
    Person operator*(Person p);
    void operator=(Person p);
    void info();
};

#endif // PERSON_H

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

class Animal
{
public:
    string name;
    Animal();
    Animal(string name);
    void info();
    virtual void sound() = 0;
};

#endif // ANIMAL_H

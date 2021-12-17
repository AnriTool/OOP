#ifndef PET_H
#define PET_H

#include <iostream>
using namespace std;

class Pet
{
public:
    string name;
    Pet();
    Pet(string name);
    void info();
    virtual void sound() = 0;
};

#endif // PET_H

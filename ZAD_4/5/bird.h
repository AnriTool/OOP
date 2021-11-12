#ifndef BIRD_H
#define BIRD_H

#include <iostream>
using namespace std;

class Bird
{
public:
    string name;
    Bird();
    Bird(string name);
    void info();
    virtual void sound() = 0;
};

#endif // BIRD_H

#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
using namespace std;
class Human
{
public:
    std::string name;
    Human();
    Human(std::string name);
    void info();
    virtual void lesson() = 0;
    virtual void exam() = 0;
};

#endif // HUMAN_H

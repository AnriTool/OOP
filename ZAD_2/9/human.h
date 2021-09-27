#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
using namespace std;
class Human
{
public:
    string name;
    string sname;
    int year;

    Human();
    Human(string name, string sname, int year);
    void info();
    bool isOlder(Human a);
    bool isYanger(Human a);
    bool isDad(Human a);
};

#endif // HUMAN_H

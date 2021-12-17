#ifndef Human_H
#define Human_H

#include <iostream>
#include <deque>
#include <set>

class Human
{
public:
    std::string name;
    std::string sname;
    int brth;
    Human();
    Human(std::string name, std::string sname, int brth);
    void info() const; // для обращения через элемент контейнера set метод должен быть константным
    bool operator < (Human b) const; // для размещения элементов в контейнере set нужно определить оператор <
};

std::deque<Human> getBrth(std::set<Human> listOfHuman,int brth);

#endif // Human_H

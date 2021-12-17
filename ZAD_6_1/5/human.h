#ifndef Human_H
#define Human_H

#include <iostream>
#include <set>
#include <list>

/*

Описать класс «Человек», данные которого включают имя, фамилию и год рождения.
Написать функцию, формирующую по заданному списку (шаблонный класс list) объектов
класса «Человек» множество (шаблонный класс set) из элементов списка. В множество
включаются люди моложе определённого года рождения.

*/




class Human
{
public:
    std::string name;
    std::string surname;
    int birthyear;
    Human();
    Human(std::string name, std::string surname, int birthyear);
    void info() const; // для обращения через элемент контейнера set метод должен быть константным
    bool operator < (Human b) const; // для размещения элементов в контейнере set нужно определить оператор <
};

std::set<Human> getHumansOfsurname(std::list<Human> listOfHuman, int birthyear);

#endif // Human_H

#ifndef Human_H
#define Human_H

#include <iostream>
#include <list>
#include <vector>

/*

Описать класс «Человек», данные которого включают имя, фамилию и год рождения.
Написать функцию, формирующую по заданному вектору (шаблонный класс vector)
объектов класса «Человек» список (шаблонный класс list) из элементов вектора. В список
включаются люди старше определённого года рождения.

*/




class Human
{
public:
    std::string name;
    std::string surname;
    int birthyear;
    Human();
    Human(std::string name, std::string surname, int birthyear);
    void info() const; // для обращения через элемент контейнера list метод должен быть константным
    bool operator < (Human b) const; // для размещения элементов в контейнере list нужно определить оператор <
};

std::list<Human> getHumansOfsurname(std::vector<Human> vectorOfHuman, int birthyear);

#endif // Human_H

#ifndef Pet_H
#define Pet_H

#include <iostream>
#include <set>
#include <queue>

/*

Определить класс «Домашнее животное», данные которого включают имя и тип
животного. Тип животного задавать перечислением типа «Кошка», «Собака», «Хомяк» и
т.п. Написать функцию, формирующую по заданной двусторонней очереди (шаблонный
класс queue) объектов класса множество (шаблонный класс set) из элементов очереди. В
множество включаются животные определенного типа.

*/

enum Type {NONE,CAT,DOG,HUMSTER};



class Pet
{
public:
    std::string name;
    Type type;
    Pet();
    Pet(std::string name,Type type);
    bool operator < (Pet b) const; // для размещения элементов в контейнере set нужно определить оператор <
    void info() const; // для обращения через элемент контейнера set метод должен быть константным
};

std::set<Pet> getPet(std::queue<Pet> listOfPet, Type tp);

#endif // Pet_H

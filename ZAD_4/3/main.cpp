#include <iostream>
#include "pet.h"
#include "cow.h"
#include "cat.h"
#include "dog.h"

using namespace std;
/*
Определить класс «Домашнее животное» и три его класса-потомка «Собака», «Кошка»
и «Корова». Определить конструкторы класса и метод info(), выводящий данные об
объекте. В базовом классе объявить чистые виртуальные функции для подачи голоса.
Реализовать эти функции в классах-потомках. Они должны быть разными для разных
животных (например – выводить разное сообщение). Продемонстрировать возможности
их вызова как виртуальных функций для указателя на базовый класс. */


int main()
{
    Pet *p1;
    Dog r1("Sergey");
    Cat c1("Mao");
    Cow a1("Donald");

    r1.info();
    p1 = &r1;
    p1->sound();

    c1.info();
    p1 = &c1;
    p1->sound();


    a1.info();
    p1 = &a1;
    p1->sound();


    return 0;
}


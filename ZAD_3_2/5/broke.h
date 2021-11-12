#ifndef BROKE_H
#define BROKE_H

#include<iostream>
using namespace std;

/*
 Описать класс «ломаная», хранящий координаты точек ломаной линии (и, возможно,
количество этих точек).

В классе предусмотреть конструкторы с параметрами и без параметров, методы
добавления и удаления точек ломаной.

Предусмотреть метод info(), выводящий на экран информацию об объекте.
Описать операцию преобразования типа double(), выполняющую преобразование ломаной
в её длину.
Описать операцию преобразования типа char*() или string(), выполняющую
преобразование объекта в строку.
*/




class Broke
{
private:
    struct coord{
        double x;
        double y;
    };
public:
    coord cr[10]; // Координаты
    int i; //Колличество точек
    Broke();
    Broke(double x,double y);
    void info();
    void add(double x,double y);
    void remove();
    operator double();
    operator string();
};

#endif // BROKE_H

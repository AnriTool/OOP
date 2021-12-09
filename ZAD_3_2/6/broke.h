#ifndef BROKE_H
#define BROKE_H

#include<iostream>
using namespace std;

/*
 Описать класс «многоугольник», хранящий координаты точек многоугольника (и,
возможно, количество этих точек).

В классе предусмотреть конструкторы с параметрами и без параметров, методы
добавления и удаления точек многоугольника.

Предусмотреть метод info(), выводящий на экран информацию об объекте.

Описать операцию преобразования типа double(), выполняющую преобразование
многоугольника в его площадь.

Описать операцию преобразования типа char*() или string(), выполняющую
преобразование объекта в строку.
*/




class Poly
{
private:
    struct coord{
        double x;
        double y;
    };
public:
    coord cr[10]; // Координаты
    int i; //Колличество точек
    Poly();
    Poly(double x,double y);
    void info();
    void add(double x,double y);
    void remove();
    operator double();
    operator string();
};

#endif // BROKE_H

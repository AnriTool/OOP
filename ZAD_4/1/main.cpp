/*

Определить класс «Геометрическая фигура» и три его класса-потомка «Треугольник», «Круг» и «Прямоугольник».

Определить конструкторы классов и метод info(), выводящий данные об объекте.

В базовом классе объявить чистые виртуальные функции для вычисления периметра и площади фигуры.

Реализовать эти функции в классах-потомках.

Продемонстрировать возможности их вызова как виртуальных функций для указателя на базовый класс.
*/

#include <iostream>
#include "figure.h"
#include "triangle.h"
#include "rectangle.h"
#include "circle.h"

using namespace std;

int main()
{
    Figure *p1;
    Triangle r1(3,4,5);
    Circle c1(5.5);
    Rectangle a1(5.4, 3);

    r1.info();
    p1 = &r1;
    cout<<p1->P()<<endl;
    cout<<p1->S()<<endl;

    c1.info();
    p1 = &c1;
    cout<<p1->P()<<endl;
    cout<<p1->S()<<endl;


    a1.info();
    p1 = &a1;
    cout<<p1->P()<<endl;
    cout<<p1->S()<<endl;




    return 0;
}


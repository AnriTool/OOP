#include "vec.h"


/*

Описать класс «вектор на плоскости», хранящий координаты х, у.

Предусмотреть конструкторы, инициализирующие свойства объектов переданными
данными и значениями по умолчанию.

Предусмотреть метод info(), выводящий на экран информацию об объекте.

Описать следующие методы класса: вычисление длины вектора, сложение текущего
вектора с переданным в параметре, скалярное произведение текущего вектора с
переданным в параметре.


    Vec();
    Vec(double x, double y);
    void info();
    double length(Vec a);
    void add(Vec a);
    double mult(Vec a);


*/


Vec::Vec(){
    x = 0;
    y = 0;
}

Vec::Vec(double x, double y){
    this->x = x;
    this->y = y;
}

void Vec::info(){
    cout<<"X = "<<x<<" Y = "<< y<< endl;
}

double Vec::length(){
    return (sqrt(pow(x,2) + pow(y,2)));
}

void Vec::add(Vec a){
    this->x += a.x;
    this->y += a.y;
}

double Vec::mult(Vec a){
    return ((this->x * a.x)+(this->y * a.y));
}

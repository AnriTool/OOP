#include <iostream>
#include "vec.h"
using namespace std;

/*

Описать класс «вектор на плоскости», хранящий координаты х, у.

Предусмотреть конструкторы, инициализирующие свойства объектов переданными
данными и значениями по умолчанию.

Предусмотреть метод info(), выводящий на экран информацию об объекте.

Описать следующие методы класса: вычисление длины вектора, сложение текущего
вектора с переданным в параметре, скалярное произведение текущего вектора с
переданным в параметре.

*/





int main()
{
    Vec a;
    Vec b(3,4);
    Vec c(3,4);

    a.info();b.info();c.info();
    cout<<"Length = "<<b.length()<<endl;
    c.add(b);
    c.info();
    cout<<"Length = "<<c.length()<<endl;
    cout<<"Mult = "<<b.mult(a)<<endl;


    return 0;
}

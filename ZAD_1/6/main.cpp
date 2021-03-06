/*
Описать тип-структуру «точка на плоскости в декартовых координатах»+

Описать функцию, принимающую в качестве параметров три точки и возвращающую
периметр соответствующего треугольника.+

Описать функцию, принимающую точку в качестве параметра и «красиво» выводящую её
на консоль.+

Описать перечисление для задания вида треугольника: остроугольный, прямоугольный,
тупоугольный.+

Описать функцию, принимающую в качестве параметров три точки и
возвращающую вид соответствующего треугольника.+
*/

#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    point a,b,c;
    double per;
    a.x = 0; a.y = 0;
    b.x = 1; b.y = 0;
    c.x = 1; c.y = 1;
    per = Per(a,b,c);

    cout << "a "; printPoint(a);
    cout << "b "; printPoint(b);
    cout << "c "; printPoint(c);
    cout << "Perimetr = " << per << endl;
    cout << "type = " << type(a,b,c) << endl;
    return 0;
}

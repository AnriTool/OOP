/*
Описать тип-структуру «точка на плоскости в декартовых координатах».

Описать функцию, принимающую точку в качестве параметра и «красиво» выводящую её
на консоль.

Описать функцию, принимающую в качестве параметров четыре точки и возвращающую
периметр соответствующего четырёхугольника.

Описать перечисление для задания вида четырёхугольника: прямоугольник, квадрат,
трапеция, общего вида.

Описать функцию, принимающую в качестве параметров четыре точки и возвращающую
вид соответствующего четырёхугольника.
*/

#include <iostream>
#include "dots.h"

using namespace std;

int main()
{
 /*
  4 типа четырёх угольников
  dot1 = 0 0 dot2 = 0 5 dot3 = 5 5 dot4 = 5 0 == квадрат
  dot1 = 0 0 dot2 = 0 5 dot3 = 3 5 dot4 = 3 0 == прямоугольник
  dot1 = 0 0 dot2 = 1 3 dot3 = 5 3 dot4 = 8 0 == трапеция
  dot1 = 0 0 dot2 = 1 3 dot3 = 5 3 dot4 = 8 2 == общий вид
 */
     point dot1, dot2 , dot3 , dot4;
     dot1.x = 0; dot1.y =0; // левый нижний //
    dot2.x = 0; dot2.y =5; // левый верхний //
    dot3.x = 5; dot3.y =5; // правый нижний //
    dot4.x = 5; dot4.y =0; // правый верхний //

    pointPrint(dot1);
    pointPrint(dot2);
    pointPrint(dot3);
    pointPrint(dot4);
    cout << "Perimetr = " << Per(dot1, dot2, dot3, dot4) << endl;
    Type(dot1, dot2, dot3, dot4);


    return 0;
}
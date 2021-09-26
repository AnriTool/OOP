#include "dots.h"
#include <math.h>

using namespace std;

double distance(point a, point b )
{
    double dist;
    dist = sqrt(pow((a.x-b.x),2) + pow((a.y-b.y),2)); //функция которая находит расстояние между двумя точками //
    return dist;
}

double Per(point dot1, point dot2, point dot3, point dot4)
{
    double line1= distance(dot1, dot2);
    double line2= distance(dot2, dot3);
    double line3= distance(dot3, dot4);
    double line4= distance(dot4, dot1);
    double per = line1 + line2 + line3 + line4; //нахожу дистанцую каждой линии в четырёх угольники через функцию distance и считаю периметр
    return per;
}
void pointPrint(point a)
{
    cout << "X = " << a.x << " Y = " << a.y << endl;
}
void Type(point a, point b, point c, point d) // a b c d это будут точки четырёхугольника, определять тип я буду проверяю паралельность сторон и их равенство//
{
    double ab, bc, cd ,da; // а это стороны длинну которых я найду через функцию distance//
   ab = distance(a,b); bc = distance(b,c);
   cd = distance(c,d); da = distance(d,a);

   if ((ab == bc) && (bc == cd) && (cd == da))
       cout << square << " = square" << endl; //я проверил является ли это квадратом

   else if ((ab == cd) && (bc == da))
       cout << rectangle << " = rectangle" << endl; // прямоугольник у него только две стороны паралельны, а друние не равны ( проверять это нам не надо так как мы проверили выше)

   else if (((a.y == d.y) && (b.y == c.y)) || (((a.x == b.x)) && (d.x == c.x)))
       cout << trapezoid << " = trapezoid" << endl; // проверив квадрат ли это или прямоугльник, мы проверяем паралельны ли точки прямых  у трапеции( проверять реавенство прямых не надо так как мы это сделали выще)
   else
       cout << general << " = general" << endl; // и если всё не подходит делаем общий вид
}

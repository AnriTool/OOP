#include "point.h"
#include <math.h>
using namespace std;

double length(point a, point b){
    double res, x,y;
    x = abs(a.x - b.x); //Нахожу расстояние x между точками
    y = abs(a.y - b.y); //Нахожу расстояние y между точками
    res = sqrt(x*x + y*y); //По теореме пифагора вычисляю длину между точками
    return res;
}
//Описать функцию, принимающую в качестве параметров три точки и возвращающую периметр

double S(point p1, point p2, point p3){
    double res, a, b, c, pp, h;
    a = length(p1,p2);
    b = length(p2,p3);
    c = length(p3,p1);
    pp = (a + b + c)/2; // Полупериметр
    h = 2*sqrt(pp*(pp-a)*(pp-b)*(pp-c))/a; //Высота
    res = (a*h)/2; //Периметр по высоте
    return res;
}

//тип
int type(point p1, point p2, point p3){
    double a,b,c;
    a = length(p1,p2);
    b = length(p2,p3);
    c = length(p3,p1);

    if ((a == b) && (b == c)) // Если a = b = c - равносторонний
        return equilateral;
    else if ((a == b) || (b == c) || (c == a)) //Если a = b или b = c или c = a - равнобедренный
        return isosceles;
    else
        return general; // Если прошлые не выполняются, то тогда этой общий вид
}

//Вывод точки
void printPoint(point d)
{
    cout <<  "Coordinates : x= " << d.x << ", y = " << d.y << endl;
}




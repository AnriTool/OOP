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
double Per(point a, point b, point c){
    double res, ab, bc, ca;
    ab = length(a,b);
    bc = length(b,c);
    ca = length(c,a);
    res = ab + bc + ca;
    return res;
}

//тип
int type(point p1, point p2, point p3){
    double a,b,c;
    a = length(p1,p2);
    b = length(p2,p3);
    c = length(p3,p1);

    if (c*c > (a*a + b*b))
        return obtuse;
    else if (c*c < (a*a + b*b))
        return acute;
    else
        return rectangular;
}

//Вывод точки
void printPoint(point d)
{
    cout <<  "Coordinates : x= " << d.x << ", y = " << d.y << endl;
}




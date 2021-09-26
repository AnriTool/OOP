#include "point.h"
#include <math.h>
using namespace std;




/*
Описать функцию, принимающую в качестве параметров указатель на массив из точек и
количество точек в массиве и возвращающую длину соответствующей ломаной линии.+

Описать перечисление для задания вида ломаной: замкнутая, вырожденная (то есть
имеющая нулевую длину), обычная. +

Описать функцию, принимающую в качестве параметров указатель на массив из точек и количество точек в массиве и возвращающую вид соответствующей ломаной линии.
*/


//Длина между точками
double len(point a, point b){
    double res, x,y;
    x = abs(a.x - b.x); //Нахожу расстояние x между точками
    y = abs(a.y - b.y); //Нахожу расстояние y между точками
    res = sqrt(x*x + y*y); //По теореме пифагора вычисляю длину между точками
    return res;
}
//Длина линии
double lineLen(point *a, int n){
    int i;
    double res = 0;
    for (i = 0; i < n-2; i++)
        res += len(a[i], a[i+1]);
    return res;
}


//тип
int type(point *a, int n){
    if (lineLen(a,n) == 0)
        return degenerate;
    else if ((a[0].x == a[n-1].x)&&(a[0].y == a[n-1].y))
        return closed;
    else
        return ordinary;
}

//Вывод точки
void printPoint(point d)
{
    cout <<  "Coordinates : x= " << d.x << ", y = " << d.y << endl;
}




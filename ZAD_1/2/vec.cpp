#include <iostream>
#include "vec.h"
#include <math.h>
using namespace std;

//Скалярное произведение векторов
double VecCompSk(vec a, vec b){
    double res;
    res = a.x * b.x + a.y * b.y;
    return res;
}

//Длина вектора
double VecLen(vec a){
    double res;
    res = sqrt(pow(a.x,2) + pow(a.y, 2));  //Формула: корень из X^2 + Y^2, sqrt - корень, pow - возведение в степень
    return res;
}


//Нахождение четрвети(квадранта)
int Quadrant(vec a){
    if ((a.x > 0) && (a.y > 0))
        return I;
    else if ((a.x < 0) && (a.y > 0))
        return II;
    else if ((a.x < 0) && (a.y < 0))
        return III;
    else
        return IV;
}

//"Красивый" вывод вектора
void VecPrint(vec a){
    cout << "(" << a.x << ";" << a.y << ")" << endl;
}

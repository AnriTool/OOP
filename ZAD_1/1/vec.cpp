#include <iostream>
#include "vec.h"
using namespace std;

//Сумма
vec VecSum(vec a, vec b){
    vec res;
    res.x = a.x + b.x;
    res.y = a.y + b.y;
    return res;
}
//Разность
vec VecDif(vec a, vec b){
    vec res;
    res.x = a.x - b.x;
    res.y = a.y - b.y;
    return res;
}

//"Красивый" вывод вектора
void VecPrint(vec a){
    cout << "(" << a.x << ";" << a.y << ")" << endl;
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



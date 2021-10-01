#include <iostream>
#include "vec.h"
using namespace std;
/*
Описать тип-структуру «вектор на плоскости», хранящую координаты х и у.

Описать функции для сложения и вычитания векторов, которые принимают в качестве
параметров два вектора и возвращают вектор в качестве результата.

Описать функцию, принимающую вектор в качестве параметра и «красиво» выводящую
его на консоль.

Описать перечисление для задания квадранта координатной плоскости.
Описать функцию, принимающую вектор в качестве параметра и возвращающую квадрант, в котором он
находится (как элемент перечисления).
*/

int main()
{
    vec a,b,sum, raz;

    a.x = 3;  a.y = 5;
    b.x = -1; b.y = 4;

    sum = VecSum(a,b);
    raz = VecDif(a,b);

    cout << "Sum = ";
    VecPrint(sum);
    cout << "Dif = ";
    VecPrint(raz);

   cout <<"quadrant sum ="<< Quadrant(sum)<<" quadrant raz ="<< Quadrant(raz) << endl;

    return 0;
}
#include "compx.h"
#include <iostream>
using namespace std;

//Сложение комплексных чисел
comp CSum(comp x, comp y){
    comp result;
    result.a = x.a + y.a;
    result.b = x.b + y.b;
    return result;
}
//Разность комплексных чисел
comp CDif(comp x, comp y){
    comp result;
    result.a = x.a - y.a;
    result.b = x.b - y.b;
    return result;
}

//"Красивый" вывод комплексного числа
void PrintComp(comp x){
    cout << "(" << x.a << "+" << x.b << "i)" << endl;
}

//Вид числа (a + bi), если bi = 0 - действительное, если a = 0 - мнимое, иначе - комплексное
int type(comp x){
    if (x.b == 0)
        return valid;
    else if (x.a == 0)
        return imaginary;
    else
        return complex;
}

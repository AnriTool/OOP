#include "compx.h"
#include <iostream>
using namespace std;

//Умножение комплексных чисел
comp CMult(comp x, comp y){
    comp result;
    double a = x.a,b = x.b,c = y.a, d = y.b; //Вспомогательные переменные, чтоб удобнее было пользоваться формулой
    result.a = a*c - b*d;
    result.b = b*c + a*d;
    return result;
}

//Деление комплексных чисел
comp CDiv(comp x, comp y){
    comp result;
    double a = x.a,b = x.b,c = y.a, d = y.b;//Вспомогательные переменные, чтоб удобнее было пользоваться формулой
    result.a =(a*c + b*d)/(c*c + d*d);
    result.b =(b*c - a*d)/(c*c + d*d);
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

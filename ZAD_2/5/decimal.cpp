#include "decimal.h"
#include <iostream>
using namespace std;

Decimal::Decimal()
{
   numer = 0;
   denum = 1;
}

Decimal::Decimal(int numer, int denum){
    this->numer = numer;
    this->denum = denum;
    this->normal();
}

void Decimal::info(){
    cout << numer << "/" << denum << endl;
}

//Нормализую дробь
void Decimal::normal(){
    int i;
    for(i = 2; i*i <= denum; ++i)
        if ((denum % i == 0) && (numer % i ==0))
        {
                    numer = numer / i;
                    denum = denum / i;
                    i = 2;
        }
}

//Создать следующие методы класса:
//   добавляющий дробь к текущей дроби,
//   вычитающий дробь из текущей дроби,
//   сравнивающий текущую дробь с переданной в параметре.

void Decimal::plus(Decimal n){
    numer = numer * n.denum + n.numer * denum;
    denum = denum * n.denum;
    this->normal();

}
void Decimal::munis(Decimal n){
    numer = numer * n.denum - n.numer * denum;
    denum = denum * n.denum;
    this->normal();
}
void Decimal::equal(Decimal n){
    numer = n.denum;
    denum = n.denum;
}

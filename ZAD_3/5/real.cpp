#include "real.h"


/*
Описать класс «массив вещественных чисел».

В классе предусмотреть методы удаления и добавления элементов.

Предусмотреть метод info(), выводящий на экран информацию об объекте.

Описать перегруженный оператор «*», выполняющий умножение всех элементов массива
на число.

Описать перегруженный оператор «/», выполняющий деление всех элементов массива на
число.




    double a[10];
    int i;
public:
    Real();
    void info();
    double operator*(double x);
    double operator/(double x);

    void add(double x);
    void del(double x);
};

*/


Real::Real()
{
  i = 0;
  int n;
  for (n = 0; n < 10; n++)
          a[i] = 0;
}



void Real::add(double x){
  if (i < 10){
    a[i] = x;
    i++;}
  else
      cout << "array is full" << endl;
}

void Real::del(){
    if (i > 0){
        a[i] = 0;
        i--;
    }
    else
         cout << "array is empty" << endl;
}


void Real::info(){
    int n;
    cout << "Ellements of massive: ";
    for (n = 0; n < i; n++)
        cout << " " << a[n];
    cout << endl;
}

Real Real::operator*(double x){
    int n;
    Real res;
    res.i = i;
    for (n = 0; n < i; n++)
        res.a[n] = a[n] * x;
    return res;
}

Real Real::operator/(double x){
    int n;
    Real res;
    res.i = i;
    for (n = 0; n < i; n++)
        res.a[n] = a[n] / x;
    return res;
}

#include "real.h"


/*
Описать класс «массив вещественных чисел».

В классе предусмотреть методы удаления и добавления элементов.

Предусмотреть метод info(), выводящий на экран информацию об объекте.

Описать перегруженный оператор «+», выполняющий объединение двух массивов.

Описать перегруженный оператор «%», выполняющий проверку элемента на вхождение в
массив.

*/


Real::Real()
{
  i = 0;
  int n;
  for (n = 0; n < 20; n++)
          a[i] = 0;
}



void Real::add(double x){
  if (i < 20){
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

void Real::operator+(Real x){
    int n;
    for (n = 0; n < x.i; n++)
        this->add(x.a[n]);
}

bool Real::operator%(double x){
    int n;
    for (n= 0; n < i; n++){
        if (x == a[n]){
            return true;
        }
    }
    return false;
}


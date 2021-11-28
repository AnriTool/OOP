#include "real.h"


/*
Описать класс «массив вещественных чисел».

В классе предусмотреть методы удаления и добавления элементов.

Предусмотреть метод info(), выводящий на экран информацию об объекте.

Описать перегруженный оператор «+», выполняющий добавление элемента в массив.

Описать перегруженный оператор «--» (префиксную и постфиксную формы),
выполняющий удаление последнего элемента из массива.

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

void Real::operator+(double x){
    this->add(x);
}

void Real::operator--(int){
    this->del();
}

void Real::operator--(){
    this->del();
}

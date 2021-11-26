#include "real.h"

Real::Real()
{
  i = 0;
  int n;
  for (n = 0; n < 10; n++)
          mass[i] = 0;
}

void Real::add(double x){
  if (i < 10){
    mass[i] = x;
    i++;}
  else
      cout << "array is full" << endl;
}

void Real::del(){
    if (i > 0){
        mass[i] = 0;
        i--;
    }
    else
         cout << "array is empty" << endl;
}


void Real::info(){
    int n;
    cout << "Ellements of massive: ";
    for (n = 0; n < i; n++)
        cout << " " << mass[n];
    cout << endl;
}


/*
Описать перегруженный оператор «==», выполняющий сравнение двух массивов с точки
зрения их равенства.
Описать перегруженный оператор «!=», выполняющий сравнение двух массивов с точки
зрения их неравенства.
*/

bool Real::operator==(Real x){
    int n;
    if(this->i == x.i){ //Если размерность массивов одинаковая, то можно сравнивать, если нет, то массивы уже не равны
        for(n = 0; n < i; n++)
            if (x.mass[n] != this->mass[n]) //если есть хоть один эллемент, который отличается, то уже не равны
                return 0;
    }
    else return 0;
    return 1;//Если дошли до сюда, значит равны
}

bool Real::operator!=(Real x){
    Real y;//Создаю Real y, куда запишу все данные от исходного Real
    y.i = this->i;
    for(int n = 0; n < i; n++)
        y.mass[n] = this->mass[n];
    if (y == x) //Использую сравнение что писал раньше
        return 0;//Если они равны, значи выозвращаю 0
    return 1;
}


















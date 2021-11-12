/*
 Описать класс «ломаная», хранящий координаты точек ломаной линии (и, возможно,
количество этих точек).
В классе предусмотреть конструкторы с параметрами и без параметров, методы
добавления и удаления точек ломаной.
Предусмотреть метод info(), выводящий на экран информацию об объекте.
Описать операцию преобразования типа double(), выполняющую преобразование ломаной
в её длину.
Описать операцию преобразования типа char*() или string(), выполняющую
преобразование объекта в строку.


    coord cr[10]; // Координаты
    int i; //Колличество точек
    Broke();
    Broke(double x,double y);
    void info();
    operator int();
    operator string();


*/



#include "broke.h"
#include <math.h>

Broke::Broke()
{
    cr[0].x = 0; cr[0].y = 0;
    i = 0;
}

Broke::Broke(double x,double y)
{
    cr[0].x = x; cr[0].y = y;
    i = 1;
}

void Broke::info()
{
    if(i == 0)
        cout << "line is empty"<<endl;
    else{
    int n;
    for(n = 0; n < i; n++)
        cout<<"Point " <<n+1<<" x:"<< cr[n].x <<" y:"<<cr[n].y<<endl;
    }
}

void Broke::add(double x, double y){
    if (i == 0){
        cr[i].x = x; cr[i].y = y;
        i++;
    }
    else if (i < 10){
        cr[i].x = x; cr[i].y = y;
        i++;
    }
    else cout<<"line is full" << endl;
}

void Broke::remove(){
    if (i >0)
        i--;
    else cout<<"line is empty" << endl;
}


Broke::operator double()
{
    double len = 0;
    int n;
    if (this->i == 1)
        return len;
    else
        for(n = 1; n < i; n++)
            len += sqrt(abs(cr[n].x - cr[n-1].x) + abs(cr[n].y - cr[n-1].y));
    return len;
}

Broke::operator string()
{
    string text;
    int n;
    for(n = 0; n < i; n++)
        text += "(" + to_string(cr[n].x) + ";"+to_string(cr[n].y) + ")";
    return text;
}

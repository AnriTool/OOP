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
        text += "(" + to_string(cr[0].x) + ";"+to_string(cr[0].y) + ")";
    return text;
}


*/

#include <iostream>
#include "broke.h"

using namespace std;

int main()
{
    Broke lm1;
    lm1.info();
    lm1.add(1.4,5.4);lm1.add(2.1,7.1);lm1.add(2.1,3.1);lm1.add(3.1,1.1);
    lm1.info();
    Broke lm2(3.3,1.3);
    lm2.info();

    lm2.add(3.4,4.2);
    lm2.info();
    // Тестируем перегруженные операторы преобразования типов

    double size = lm1;
    cout << size << endl;

    string s2 = lm2;
    cout << s2 << endl;


    return 0;
}


/*

Описать класс «Автомобиль». Автомобили приезжают на заправку, где есть две колонки
(соответвенно – две очереди). При этом считать, что некоторые клиенты обладают большим
приоритетом по отношению к остальным (спецслужбы, инвалиды). Для этого в классе
хранить уровень приоритета. Объявить перечисление, включающее два уровня приоритета.
Определить для класса операцию сравнения < . Смоделировать поведение двух очередей к
колонкам с помощью шаблонного класса priority_queue. При этом считать, что клиенты
стараются вставать в ту очередь, где меньше машин. Программа должна считывать данные
о приходящих клиентах из обычной очереди (шаблонный класс queue), помещать их в две
приоритетные очереди и выдавать на консоль информацию о последовательности заправки
машин.

*/


#include<iostream>
#include"car.h"
#include<queue>
using namespace std;

int main()
{
    queue<Car> waiting;
    priority_queue<Car> column1, column2, buffer;

    waiting.push(Car("T132BA125rus", REGULAR));
    waiting.push(Car("T238HB127rus", INVALIDS));
    waiting.push(Car("M282TB125rus", SPECOPS));
    waiting.push(Car("T187MM127rus", SPECOPS));
    waiting.push(Car("B357HA125rus", INVALIDS));
    waiting.push(Car("H132TM127rus", REGULAR));
    waiting.push(Car("A154TH125rus", SPECOPS));

    while(!waiting.empty()){
           waiting.front().info();
           if (column2.size() < column1.size())
               column2.push(waiting.front());
           else
               column1.push(waiting.front());
           waiting.pop();
        }
    cout << "---Column 1---" << endl;
    buffer = column1;
    while(!buffer.empty()){
           buffer.top().info();
           buffer.pop();
        }
    cout << "---Column 2---" << endl;
    buffer = column2;
    while(!buffer.empty()){
           buffer.top().info();
           buffer.pop();
        }

    return 0;
}

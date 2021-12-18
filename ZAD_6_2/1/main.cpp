/*

Описать класс «Пациент поликлиники». При этом считать, что некоторые пациенты
обладают большим приоритетом по отношению к остальным (ветераны, инвалиды). Для
этого в классе хранить уровень приоритета. Объявить перечисление, включающее три
уровня приоритета. Определить для класса операцию сравнения < . Смоделировать
поведение очереди в регистратуру с помощью шаблонного класса priority_queue.
Программа должна считывать данные о приходящих пациентах из обычной очереди
(шаблонный класс queue), помещать их в приоритетную очередь и выдавать на консоль
информацию о последовательности работы с пациентами.

*/


#include<iostream>
#include"patient.h"
#include<set>
#include<queue>
using namespace std;

int main()
{
    queue<Patient> waiting;
    priority_queue<Patient> sortWaiting, buffer;

    waiting.push(Patient("Andrey", REGULAR));
    waiting.push(Patient("Vanya", INVALID));
    waiting.push(Patient("Dima", INVALID));
    waiting.push(Patient("Pasha", VETERAN));
    waiting.push(Patient("Vova", INVALID));
    waiting.push(Patient("Masha", REGULAR));

    while(!waiting.empty()){
           waiting.front().info();
           sortWaiting.push(waiting.front());
           waiting.pop();
        }
    cout << "---Sorted---" << endl;
    buffer = sortWaiting;
    while(!buffer.empty()){
           buffer.top().info();
           buffer.pop();
        }

    return 0;
}

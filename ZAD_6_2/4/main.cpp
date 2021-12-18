/*

Описать класс «Клиент банка». При этом считать, что некоторые клиенты обладают
большим приоритетом по отношению к остальным (дети, инвалиды). Для этого в классе
хранить уровень приоритета. Объявить перечисление, включающее четыре уровня
приоритета. Определить для класса операцию сравнения < . Смоделировать поведение
очереди к специалистам с помощью шаблонного класса priority_queue. Программа
должна считывать данные о приходящих клиентах из обычной очереди (шаблонный класс
queue), помещать их в приоритетную очередь и выдавать на консоль информацию о
последовательности работы с клиентами.

*/


#include<iostream>
#include"clients.h"
#include<set>
#include<queue>
using namespace std;

int main()
{
    queue<Clients> waiting;
    priority_queue<Clients> sortWaiting, buffer;

    waiting.push(Clients("Lena", REGULAR));
    waiting.push(Clients("Vanya", CHILDREN));
    waiting.push(Clients("Kirill", D_CHILDREN));
    waiting.push(Clients("Olya", DISABLED));
    waiting.push(Clients("Kolya", DISABLED));
    waiting.push(Clients("Masha", REGULAR));

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

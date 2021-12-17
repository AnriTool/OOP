/*

Определить класс «Домашнее животное», данные которого включают имя и тип
животного. Тип животного задавать перечислением типа «Кошка», «Собака», «Хомяк» и
т.п. Написать функцию, формирующую по заданной двусторонней очереди (шаблонный
класс queue) объектов класса множество (шаблонный класс set) из элементов очереди. В
множество включаются животные определенного типа.

*/


#include <iostream>
#include "pet.h"

using namespace std;

int main()
{
    Pet b1;
    Pet b2("Kety", CAT);
    Pet b3("Lan", DOG);
    Pet b4("Kvas", DOG);
    Pet b5("Dune", HUMSTER);


    std::queue<Pet> PetList,data;
    std::set<Pet> PetSet;

    PetList.push(b1);
    PetList.push(b2);
    PetList.push(b3);
    PetList.push(b4);
    PetList.push(b5);

    data = PetList;
    while(!data.empty())
    {
        data.front().info();
        data.pop();
    }

    std::cout << "----------------" << endl;;

    PetSet = getPet(PetList, DOG);

    for (std::set<Pet>::iterator it = PetSet.begin(); it != PetSet.end(); it++)
    {
        it->info();
    }

    return 0;
}


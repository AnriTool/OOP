/*

Описать класс «Человек», данные которого включают имя, фамилию и год рождения.
Написать функцию, формирующую по заданному списку (шаблонный класс list) объектов
класса «Человек» множество (шаблонный класс set) из элементов списка. В множество
включаются люди моложе определённого года рождения.

*/


#include <iostream>
#include "human.h"

using namespace std;

int main()
{
    Human b1;
    Human b2("Dan", "Simmons", 1998);
    Human b3("Anri", "Tool", 2001);
    Human b4("Maks", "Qub", 2000);
    Human b5("Wht", "Qb", 1999);


    std::list<Human> HumanList;
    std::set<Human> HumanSet;

    HumanList.push_back(b1);
    HumanList.push_back(b2);
    HumanList.push_back(b3);
    HumanList.push_back(b4);
    HumanList.push_back(b5);

    for (std::list<Human>::iterator it = HumanList.begin(); it != HumanList.end(); it++)
    {
        it->info();
    }

    std::cout << "----------------" << "\n";

    HumanSet = getHumansOfsurname(HumanList, 2000);

    for (std::set<Human>::iterator it = HumanSet.begin(); it != HumanSet.end(); it++)
    {
        it->info();
    }


    return 0;
}


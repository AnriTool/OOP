/*
Определить класс «Книга», данные которого включают название книги, автора и число
страниц. Написать функцию, формирующую по заданному вектору (шаблонный класс
vector) объектов класса «Книга» список (шаблонный класс list) из элементов вектора. В
список включаются книги определенного автора.
 */


#include <iostream>
#include "human.h"

using namespace std;

int main()
{
    Human b1;
    Human b2("Dan", "Simmons", 2005);
    Human b3("Dune", "Dons", 2001);
    Human b4 ("Frank", "Herbert", 2005);
    Human b5("Isaak", "Asimov", 2003);


    std::set<Human> HumanList;
    std::deque<Human> HumanSet;

    HumanList.insert(b1);
    HumanList.insert(b2);
    HumanList.insert(b3);
    HumanList.insert(b4);
    HumanList.insert(b5);

    for (std::set<Human>::iterator it = HumanList.begin(); it != HumanList.end(); it++)
    {
        it->info();
    }

    std::cout << "----------------" << "\n";

    HumanSet = getBrth(HumanList, 2005);

    for (std::deque<Human>::iterator it = HumanSet.begin(); it != HumanSet.end(); it++)
    {
        it->info();
    }


    return 0;
}


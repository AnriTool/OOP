/*

Описать класс «Человек», данные которого включают имя, фамилию и год рождения.
Написать функцию, формирующую по заданному вектору (шаблонный класс vector)
объектов класса «Человек» список (шаблонный класс list) из элементов вектора. В список
включаются люди старше определённого года рождения.

*/


#include <iostream>
#include "human.h"

using namespace std;

int main()
{
    Human b1;
    Human b2("Dima", "Plut", 1998);
    Human b3("Vova", "Telichko", 2001);
    Human b4("Dana", "Li", 2000);
    Human b5("Vlad", "Vosk", 1999);


    std::vector<Human> Humanvector;
    std::list<Human> Humanlist;

    Humanvector.push_back(b1);
    Humanvector.push_back(b2);
    Humanvector.push_back(b3);
    Humanvector.push_back(b4);
    Humanvector.push_back(b5);

    for (std::vector<Human>::iterator it = Humanvector.begin(); it != Humanvector.end(); it++)
    {
        it->info();
    }

    std::cout << "----------------" << "\n";

    Humanlist = getHumansOfsurname(Humanvector, 1999);

    for (std::list<Human>::iterator it = Humanlist.begin(); it != Humanlist.end(); it++)
    {
        it->info();
    }


    return 0;
}


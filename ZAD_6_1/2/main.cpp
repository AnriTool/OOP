/*
Описать класс «Студент», данные которого включают имя и направление подготовки.
Направление подготовки задать перечислением. Написать функцию, формирующую по
заданному списку (шаблонный класс list) объектов класса «Студент» множество
(шаблонный класс set) из элементов списка. В множество включаются студенты
указанного направления подготовки.
 */


#include <iostream>
#include "student.h"

using namespace std;

int main()
{
    Student b1;
    Student b2("Hyperion", LANG);
    Student b3("Endimion", PHYS);
    Student b4("Dune", MATH);
    Student b5("Isaak", LANG);


    std::list<Student> StudentList;
    std::set<Student> StudentSet;

    StudentList.push_back(b1);
    StudentList.push_back(b2);
    StudentList.push_back(b3);
    StudentList.push_back(b4);
    StudentList.push_back(b5);

    for (std::list<Student>::iterator it = StudentList.begin(); it != StudentList.end(); it++)
    {
        it->info();
    }

    std::cout << "----------------" << "\n";

    StudentSet = getStudy(StudentList, LANG);

    for (std::set<Student>::iterator it = StudentSet.begin(); it != StudentSet.end(); it++)
    {
        it->info();
    }


    return 0;
}


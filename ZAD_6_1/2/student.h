#ifndef Student_H
#define Student_H

#include <iostream>
#include <set>
#include <list>

enum Study {NONE,MATH, PHYS, LANG};

class Student
{
public:
    std::string name;
    Study st;
    Student();
    Student(std::string name,Study st);
    void info() const; // для обращения через элемент контейнера set метод должен быть константным
    bool operator < (Student b) const; // для размещения элементов в контейнере set нужно определить оператор <
};

std::set<Student> getStudy(std::list<Student> listOfStudent, Study st);

#endif // Student_H

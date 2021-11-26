#ifndef STUDENT_H
#define STUDENT_H
#include "Human.h"


class Student : public Human
{
public:
    Student();
    Student(std::string name);
    void info();
    void lesson();
    void exam();
};

#endif // STUDENT_H

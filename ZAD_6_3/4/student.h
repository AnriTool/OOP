#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

class Student
{
public:
    std::string Number;
    std::string Name;
    Student();
    Student(std::string Number, std::string Name);
    bool operator < (Student b) const;
    void info() const;
};

#endif // STUDENT_H

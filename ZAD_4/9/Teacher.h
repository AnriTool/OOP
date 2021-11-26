#ifndef TEACHER_H
#define TEACHER_H
#include "Human.h"

class Teacher: public Human
{
public:
    Teacher();
    Teacher(std::string name);
    void info();
    void lesson();
    void exam();
};

#endif // TEACHER_H

#include "student.h"

Student::Student()
{
    name = "NO NAME";
    st = NONE;
}

Student::Student(std::string name, Study st)
{
    this->name = name;
    this->st = st;
}

void Student::info() const
{
    std::cout << name.c_str() << " ";
        if(st == NONE)
             std::cout << "NONE" << std::endl;
        else if(st == MATH)
             std::cout << "MATH" << std::endl;
        else if(st == PHYS)
             std::cout << "PHYS" << std::endl;
        else if(st == LANG)
             std::cout << "LANG" << std::endl;
}

bool Student::operator < (Student b) const
{
    if (name != b.name)
    {
        return name < b.name;
    }
    else
    {
        return name < b.name;
    }
}

std::set<Student> getStudy(std::list<Student> listOfStudent, Study st)
{
    std::set<Student> StudentSet;

    for (std::list<Student>::iterator it = listOfStudent.begin(); it != listOfStudent.end(); it++)
    {
        if(it->st == st)
        {
            StudentSet.insert(*it);
        }
    }

    return StudentSet;
}

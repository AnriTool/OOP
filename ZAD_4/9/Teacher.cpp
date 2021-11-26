#include "Teacher.h"

Teacher::Teacher():Human()
{

}

Teacher::Teacher(std::string name):Human(name)
{

}

void Teacher::info()
{
    std::cout << "This is teacher " << name << "\n";
}

void Teacher::lesson()
{
    std::cout << "Teacher " << name <<" on lesson "<< endl;
}

void Teacher::exam()
{
    std::cout << "Teacher " << name <<" on exam "<< endl;
}


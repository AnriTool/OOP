#include "Student.h"

Student::Student():Human()
{

}

Student::Student(std::string name):Human(name)
{

}

void Student::info()
{
    std::cout << "This is Student " << name << "\n";
}

void Student::lesson()
{
    std::cout << "Student " << name <<" on lesson "<< endl;
}

void Student::exam()
{
    std::cout << "Student " << name <<" on exam "<< endl;
}

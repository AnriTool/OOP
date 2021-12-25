#include "student.h"

Student::Student()
{
    Number = "NO NUMBER";
    Name = "NO NAME";
}

Student::Student(std::string Number, std::string Name)
{
    this->Number = Number;
    this->Name = Name;
}

bool Student::operator < (Student c) const
{
    return (Number < c.Number);
}

void Student::info() const
{
    std::cout << Name << ", " << Number << "\n";
}

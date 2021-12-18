#include "patient.h"

Patient::Patient()
{
    name = "NO NAME";
    pr = REGULAR;
}

Patient::Patient(std::string name, priority pr)
{
    this->name = name;
    this->pr = pr;
}

bool Patient::operator < (Patient b) const
{
    return (pr < b.pr);
}

void Patient::info() const
{
    std::cout << name << " ";
        if(pr == REGULAR)
             std::cout << "Regular" << std::endl;
        else if(pr == VETERAN)
             std::cout << "Veteran" << std::endl;
        else if(pr == INVALID)
             std::cout << "Invalid" << std::endl;
}


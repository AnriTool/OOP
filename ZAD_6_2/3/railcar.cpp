#include "railcar.h"

Railcar::Railcar()
{
    type = NONE;
    name = "NONAME";
}

Railcar::Railcar(std::string name,Type type)
{
    this->type = type;
    this->name = name;
}

bool Railcar::operator < (Railcar b) const
{
    return (type < b.type);
}

void Railcar::info() const
{
    std::cout << name << " ";
    if (type == NONE)
        std::cout << "NONE" << std::endl;
    else if (type == CARGO)
        std::cout << "CARGO" << std::endl;
    else if (type == PASSENGER)
        std::cout << "PASSENGER" << std::endl;
}


#include "clients.h"

Clients::Clients()
{
    name = "NO NAME";
    pr = REGULAR;
}

Clients::Clients(std::string name, priority pr)
{
    this->name = name;
    this->pr = pr;
}

bool Clients::operator < (Clients b) const
{
    return (pr < b.pr);
}

void Clients::info() const
{
    std::cout << name << " ";
        if(pr == REGULAR)
             std::cout << "Regular" << std::endl;
        else if(pr == CHILDREN)
             std::cout << "Children" << std::endl;
        else if(pr == DISABLED)
             std::cout << "Disabled" << std::endl;
        else if(pr == D_CHILDREN)
             std::cout << "Disabled children" << std::endl;
}


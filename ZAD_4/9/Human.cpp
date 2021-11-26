#include "Human.h"

Human::Human()
{
    name = "NO NAME";
}

Human::Human(std::string name)
{
    this->name = name;
}

void Human::info()
{
    std::cout << "This is person " << name << endl;
}


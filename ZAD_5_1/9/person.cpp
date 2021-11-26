#include "person.h"

Person::Person()
{
    name = "NO NAME";
}

Person::Person(std::string name, int birthYear)
{
    this->name = name;
    this->birthYear = birthYear;
}

Person Person::operator*(Person p)
{
    Person n;
    n.name = this->name + '*' + p.name;
    n.birthYear = this->birthYear * p.birthYear;
    return n;
}

void Person::info()
{
    std::cout << name << "\t" << birthYear << "\n";
}

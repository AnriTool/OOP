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

Person Person::operator+(Person p){
    Person n;
    n.birthYear = this->birthYear + p.birthYear;
    n.name = this->name + "+" + p.name;
    return n;
}
Person Person::operator*(Person p){
    Person n;
    n.birthYear = this->birthYear * p.birthYear;
    n.name = this->name + "*" + p.name;
    return n;
}

void Person::operator=(Person p){
   this->birthYear = p.birthYear;
   this->name = p.name;
}


void Person::info()
{
    std::cout << name << "\t" << birthYear << "\n";
}

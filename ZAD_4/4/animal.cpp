#include "animal.h"

Animal::Animal()
{
    name = "NO NAME";
}

Animal::Animal(string name)
{
    this->name = name;
}

void Animal::info()
{
    cout << "This is animal " << name << "\n";
}


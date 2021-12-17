#include "pet.h"

Pet::Pet()
{
    name = "NO NAME";
}

Pet::Pet(string name)
{
    this->name = name;
}

void Pet::info()
{
    cout << "This is Pet " << name << "\n";
}


#include "bird.h"

Bird::Bird()
{
    name = "NO NAME";
}

Bird::Bird(string name)
{
    this->name = name;
}

void Bird::info()
{
    cout << "This is person " << name << "\n";
}


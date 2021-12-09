#include "elephant.h"

Elephant::Elephant():Animal()
{

}

Elephant::Elephant(string name):Animal(name)
{

}

void Elephant::info()
{
    cout << "This is Elephant " << name << "\n";
}

void Elephant::sound()
{
    cout << "Vuuuuuu" << endl;
}



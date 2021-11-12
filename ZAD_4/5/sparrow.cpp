#include "sparrow.h"

Sparrow::Sparrow():Bird()
{

}

Sparrow::Sparrow(string name):Bird(name)
{

}

void Sparrow::info()
{
    cout << "This is Sparrow " << name << "\n";
}

void Sparrow::sound()
{
    cout << "crk crk" << endl;
}



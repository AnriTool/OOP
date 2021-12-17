#include "cow.h"

Cow::Cow():Pet()
{

}

Cow::Cow(string name):Pet(name)
{

}

void Cow::info()
{
    cout << "This is Cow " << name << "\n";
}

void Cow::sound()
{
    cout << "Mooo" << endl;
}



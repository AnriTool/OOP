#include "cat.h"

Cat::Cat():Pet()
{

}

Cat::Cat(string name):Pet(name)
{

}

void Cat::info()
{
    cout << "This is Cat " << name << "\n";
}

void Cat::sound()
{
    cout << "Meow" << endl;
}




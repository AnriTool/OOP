#include "dog.h"

Dog::Dog():Pet()
{

}

Dog::Dog(string name):Pet(name)
{

}

void Dog::info()
{
    cout << "This is Dog " << name << "\n";
}

void Dog::sound()
{
    cout << "Woof" << endl;
}

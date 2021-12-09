#include "wolf.h"

Wolf::Wolf():Animal()
{

}

Wolf::Wolf(string name):Animal(name)
{

}

void Wolf::info()
{
    cout << "This is Wolf " << name << "\n";
}

void Wolf::sound()
{
    cout << "Woof" << endl;
}

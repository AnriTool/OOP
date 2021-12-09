#include "tiger.h"

Tiger::Tiger():Animal()
{

}

Tiger::Tiger(string name):Animal(name)
{

}

void Tiger::info()
{
    cout << "This is Tiger " << name << "\n";
}

void Tiger::sound()
{
    cout << "Vrmyau" << endl;
}




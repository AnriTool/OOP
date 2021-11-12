#include "crow.h"

Crow::Crow():Bird()
{

}

Crow::Crow(std::string name):Bird(name)
{

}

void Crow::info()
{
    cout << "This is Crow " << name << "\n";
}

void Crow::sound()
{
    cout << "Kar Kar" <<endl;
}

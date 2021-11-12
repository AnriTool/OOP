#include "pigeon.h"

Pigeon::Pigeon():Bird()
{

}

Pigeon::Pigeon(std::string name):Bird(name)
{

}

void Pigeon::info()
{
    std::cout << "This is Pigeon " << name << "\n";
}

void Pigeon::sound()
{
    std::cout << "Grl Grl" << endl;;
}


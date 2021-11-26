#include "Rop.h"

Rop::Rop():Human()
{

}

Rop::Rop(std::string name):Human(name)
{

}

void Rop::info()
{
    std::cout << "This is Rop " << name << "\n";
}

void Rop::lesson()
{
    std::cout << "Rop " << name <<" on lesson "<< endl;
}

void Rop::exam()
{
    std::cout << "Rop " << name <<" on exam "<< endl;
}

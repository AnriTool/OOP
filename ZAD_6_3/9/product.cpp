#include "product.h"

Product::Product()
{
    Numer = "NO NUMBER";
    Name = "NO MODEL";
}

Product::Product(std::string Numer, std::string Name)
{
    this->Numer = Numer;
    this->Name = Name;
}

bool Product::operator < (Product c) const
{
    return (Numer < c.Numer);
}

void Product::info() const
{
    std::cout << Name << ", " << Numer << "\n";
}

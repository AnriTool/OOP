#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

class Product
{
public:
    std::string Numer;
    std::string Name;
    Product();
    Product(std::string Numer, std::string Name);
    bool operator < (Product b) const;
    void info() const;
};

#endif // PRODUCT_H

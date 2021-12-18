#ifndef Railcar_H
#define Railcar_H

#include <iostream>

enum Type {NONE,CARGO,PASSENGER};


class Railcar
{
    public:
    std::string name;
    Type type;
    Railcar();
    Railcar(std::string name, Type type);
    bool operator < (Railcar b) const;
    void info() const;
};

#endif // Railcar_H

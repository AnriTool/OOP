#ifndef CAR_H
#define CAR_H

#include <iostream>

enum priority {REGULAR, SPECOPS, INVALIDS };

class Car
{
    public:
    std::string number;
    priority pr;
    Car();
    Car(std::string number, priority pr);
    bool operator < (Car b) const;
    void info() const;
};

#endif // CAR_H

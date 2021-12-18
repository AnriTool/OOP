#include "car.h"

Car::Car()
{
    number = "NO number";
    pr = REGULAR;
}

Car::Car(std::string number, priority pr)
{
    this->number = number;
    this->pr = pr;
}

bool Car::operator < (Car b) const
{
    if ((pr == INVALIDS || pr == SPECOPS) && (b.pr == INVALIDS || b.pr == SPECOPS))
        return 0;
    return (pr < b.pr);
}

void Car::info() const
{
    std::cout << number << " ";
        if(pr == REGULAR)
             std::cout << "Regular" << std::endl;
        else if(pr == SPECOPS)
             std::cout << "Security service" << std::endl;
        else if(pr == INVALIDS)
             std::cout << "Invalid" << std::endl;
}


#include "human.h"

Human::Human()
{
    name = "NO name";
    surname = "NO surname";
    birthyear = 0;
}

Human::Human(std::string name, std::string surname, int birthyear)
{
    this->name = name;
    this->surname = surname;
    this->birthyear = birthyear;
}

void Human::info() const
{
    std::cout << surname.c_str() << " " << name.c_str() << ", " << birthyear << std::endl;
}

bool Human::operator < (Human b) const
{
    if (surname != b.surname)
    {
        return surname < b.surname;
    }
    else
    {
        return name < b.name;
    }
}

std::set<Human> getHumansOfsurname(std::list<Human> listOfHuman, int birthyear)
{
    std::set<Human> HumanSet;

    for (std::list<Human>::iterator it = listOfHuman.begin(); it != listOfHuman.end(); it++)
    {
        if(it->birthyear < birthyear)
        {
            HumanSet.insert(*it);
        }
    }

    return HumanSet;
}

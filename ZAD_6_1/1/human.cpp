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

std::list<Human> getHumansOfsurname(std::vector<Human> vectorOfHuman, int birthyear)
{
    std::list<Human> Humanlist;

    for (std::vector<Human>::iterator it = vectorOfHuman.begin(); it != vectorOfHuman.end(); it++)
    {
        if(it->birthyear > birthyear)
        {
            Humanlist.push_back(*it);
        }
    }

    return Humanlist;
}

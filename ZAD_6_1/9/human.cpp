#include "human.h"

Human::Human()
{
    name = "NO NAME";
    sname = "NO SURNAME";
    brth = 0;
}

Human::Human(std::string name, std::string sname, int brth)
{
    this->name = name;
    this->sname = sname;
    this->brth = brth;
}

void Human::info() const
{
    std::cout << sname.c_str() << " " << name.c_str() << ", " << brth << std::endl;
}

bool Human::operator < (Human b) const
{
    if (sname != b.sname)
    {
        return sname < b.sname;
    }
    else
    {
        return name < b.name;
    }
}

std::deque<Human> getBrth(std::set<Human> listOfHuman,int brth)
{
    std::deque<Human> HumanSet;

    for (std::set<Human>::iterator it = listOfHuman.begin(); it != listOfHuman.end(); it++)
    {
        if(it->brth == brth)
        {
            HumanSet.push_back(*it);
        }
    }

    return HumanSet;
}

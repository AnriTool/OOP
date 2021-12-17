#include "pet.h"

Pet::Pet()
{
    name = "NO NAME";
    type = NONE;
}

Pet::Pet(std::string name, Type type)
{
    this->name = name;
    this->type = type;
}

void Pet::info() const
{
    std::cout << name.c_str() << " ";
    if(type == NONE)
         std::cout << "NONE" << std::endl;
    else if(type == CAT)
         std::cout << "CAT" << std::endl;
    else if(type == DOG)
         std::cout << "DOG" << std::endl;
    else if(type == HUMSTER)
         std::cout << "HUMSTER" << std::endl;
}

bool Pet::operator < (Pet b) const
{
    return true;
}

std::set<Pet> getPet(std::queue<Pet> listOfPet, Type tp)
{
    std::set<Pet> PetSet;
    Pet t;

    while(!listOfPet.empty())
    {
        t = listOfPet.front();
        if(t.type == tp)
            PetSet.insert(t);
        listOfPet.pop();
    }

    return PetSet;
}

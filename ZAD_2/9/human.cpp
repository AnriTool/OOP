#include "human.h"

Human::Human()
{
    name ="empty";
    sname = "empty";
    year = 0;
}

Human::Human(string name, string sname, int year){
    this->name = name;
    this->sname = sname;
    this->year = year;
}

void Human::info(){
    cout<<name << " "<< sname << " " << year << endl;
}

/*
void isOlder(Human);
void isYanger(Human);
void idDad(Human);
*/

//Старше
bool Human::isOlder(Human a){
    if (year < a.year){
        cout << name << "is older " << a.name << endl;
        return true;
    }
    return false;
}
//Младше
bool Human::isYanger(Human a){
    if (year > a.year){
        cout << name << "is yanger " << a.name << endl;
        return true;
    }
    return false;
}

//Может быть отцом
bool Human::isDad(Human a){
    if ((a.year - year) > 18){
        cout << name << "maybe dad " << a.name << endl;
        return true;
    }
    return false;
}

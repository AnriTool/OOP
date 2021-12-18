#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>

enum priority {REGULAR,VETERAN ,INVALID};

class Patient
{
    public:
    std::string name;
    priority pr;
    Patient();
    Patient(std::string name, priority pr);
    bool operator < (Patient b) const;
    void info() const;
};

#endif // PATIENT_H

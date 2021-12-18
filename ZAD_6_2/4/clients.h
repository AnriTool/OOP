#ifndef CLIENTS_H
#define CLIENTS_H

#include <iostream>

enum priority {REGULAR,CHILDREN,DISABLED, D_CHILDREN};

class Clients
{
    public:
    std::string name;
    priority pr;
    Clients();
    Clients(std::string name, priority pr);
    bool operator < (Clients b) const;
    void info() const;
};

#endif // CLIENTS_H

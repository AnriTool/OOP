#ifndef ROP_H
#define ROP_H
#include "Human.h"


class Rop : public Human
{
public:
    Rop();
    Rop(std::string name);
    void info();
    void lesson();
    void exam();
};

#endif // ROP_H

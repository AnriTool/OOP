#include <iostream>
#include "animal.h"
#include "elephant.h"
#include "tiger.h"
#include "wolf.h"

using namespace std;

int main()
{
    Animal *p1;
    Wolf r1("Sergey");
    Tiger c1("Mao");
    Elephant a1("Donald");

    r1.info();
    p1 = &r1;
    p1->sound();

    c1.info();
    p1 = &c1;
    p1->sound();


    a1.info();
    p1 = &a1;
    p1->sound();


    return 0;
}


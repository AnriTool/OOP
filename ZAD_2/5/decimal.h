#ifndef DECIMAL_H
#define DECIMAL_H
#include <iostream>
using namespace std;

class Decimal
{
private:
    	int numer; //Числитель
   	int denum; //знаминатель
        void normal();
public:
    Decimal();
    Decimal(int numer, int denum);
    void info();
    void plus(Decimal n);
    void munis(Decimal n);
    void equal(Decimal n);
};

#endif // DECIMAL_H

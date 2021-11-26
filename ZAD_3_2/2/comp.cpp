
#include "comp.h"
#include <math.h>

Comp::Comp()
{
    x = 0; i = 0;
}

Comp::Comp(double x,double i)
{
   this->x = x; this->i = i;
}

void Comp::info()
{
   cout << x << '+' << i <<'i'<<endl;
}


Comp::operator double()
{
  return sqrt(x*x+i*i);
}

Comp::operator string()
{
   string s ="";
   s+= to_string(x) + '+' + to_string(i)+'i';
   return s;
}

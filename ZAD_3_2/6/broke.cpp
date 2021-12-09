


#include "broke.h"
#include <math.h>

Poly::Poly()
{
    cr[0].x = 0; cr[0].y = 0;
    i = 0;
}

Poly::Poly(double x,double y)
{
    cr[0].x = x; cr[0].y = y;
    i = 1;
}

void Poly::info()
{
    if(i == 0)
        cout << "line is empty"<<endl;
    else{
    int n;
    for(n = 0; n < i; n++)
        cout<<"Point " <<n+1<<" x:"<< cr[n].x <<" y:"<<cr[n].y<<endl;
    }
}

void Poly::add(double x, double y){
    if (i == 0){
        cr[i].x = x; cr[i].y = y;
        i++;
    }
    else if (i < 10){
        cr[i].x = x; cr[i].y = y;
        i++;
    }
    else cout<<"line is full" << endl;
}

void Poly::remove(){
    if (i >0)
        i--;
    else cout<<"line is empty" << endl;
}


Poly::operator double()
{
    double s,xy = 0,yx = 0;
    int n;
    for (n = 0; n < i-1; n++){
        xy += cr[n].x * cr[n+1].y;
        yx +=  cr[n].y * cr[n+1].x;
    }
   s = abs(xy - yx)/2;
   return s;
}

Poly::operator string()
{
    string text;
    int n;
    for(n = 0; n < i; n++)
        text += "(" + to_string(cr[n].x) + ";"+to_string(cr[n].y) + ")";
    return text;
}

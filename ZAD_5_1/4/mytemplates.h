#ifndef MYTEMPLATES
#define MYTEMPLATES
#include <iostream>
using namespace std;

template <class T>
double ArifMean(T *arr, int n)
{
    double element = 0;
    for(int i = 0; i < n; i++)
    {
       element = arr[i] + element;
    }
    element = element / n;
    return element;
}

template <class T>
double StandDev(T *arr, int n)
{
    double element = 0;
    double am = ArifMean(arr, n);
    for(int i = 0; i < n; i++)
    {
       element = (arr[i] - am) + element ;
       //cout<<element<<endl;
    }
    return (element / (n-1));
}



#endif // MYTEMPLATES


#ifndef MYTEMPLATES
#define MYTEMPLATES


template <class T>
T sum(T *arr, int n)
{
    T element  = arr[0];
    for(int i = 1; i < n-1; i++)
    {
       element = element + arr[i];
    }
    return element;
}

template <class T>
T mult(T *arr, int n)
{
    T element = arr[0];
    for(int i = 1; i < n-1; i++)
    {
       element = element * arr[i];
    }
    return element;
}



#endif // MYTEMPLATES


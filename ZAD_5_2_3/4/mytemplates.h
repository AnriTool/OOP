#ifndef MYTEMPLATES
#define MYTEMPLATES

#include<iostream>

const int MAXSIZE = 10;

class Full{};  // Классы исключений
class Empty{};
class Exist{};

template <class T>
class Container
{
private:
    T data[MAXSIZE];
    int size;
public:
    Container();
    void add(T x);
    void del();
    void info();
};

template <class T>
Container<T>::Container()
{
    size = 0;
}

template <class T>
void Container<T>::add(T x)
{
    if (size < MAXSIZE)
    {
        int i,count = 0;
        for(i = 0; i < size; i++)
            if (data[i] == x)
                count++;
        if (count < 2){
        data[size] = x;
        size++;
        }
        else throw Exist();
    }
    else
    {
        throw Full();
    }
}

template <class T>
void Container<T>::del()
{
    if (size > 0)
    {
        size--; 
    }
    else
    {
        throw Empty();
    }
}

template <class T>
void Container<T>::info()
{
    for (int i = 0; i < size - 1; i++)
    {
        std::cout << data[i] << ", ";
    }
    if (size > 0)
    {
        std::cout << data[size - 1];
    }
    std::cout << "\n";
}

#endif // MYTEMPLATES


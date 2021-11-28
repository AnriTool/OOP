#ifndef MYTEMPLATES
#define MYTEMPLATES

#include<iostream>

const int MAXSIZE = 10;

class Full{};  // Классы исключений
class Empty{};
class Equal{};

template <class T>
class Container
{
private:
    T data[MAXSIZE];
    int size;
public:
    Container();
    void sort();
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
void Container<T>::sort()
{

    T element;
    for(int i = 0; i < size-1; i++)
    {
        for(int j = 0; j < size-1; j++)
        {
            if (data[j+1] > data[j])
            {
                element = data[j];
                data[j] = data[j+1];
                data[j+1] = element;
            }
        }
    }
    bool isEqual = true;
    if (size > 1)
        for(int i = 0; i < size-1; i++)
        {
            if (data[i] != data[i+1])
            {
                isEqual = false;
            }
        }
    else isEqual = false;
    if (isEqual)
    {
        throw Equal();
    }
}


template <class T>
void Container<T>::add(T x)
{
    if (size < MAXSIZE)
    {
        data[size] = x;
        size++;
        this->sort();
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


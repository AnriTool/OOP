#ifndef MYTEMPLATES
#define MYTEMPLATES

#include<iostream>
using namespace std;
const int MAXSIZE = 100;


class Full{};  // Классы исключений
class Empty{};




template <class T>
class Container
{
private:
    T data[MAXSIZE];
    int size;
    T max;
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
//добавление данных должно осуществляться так, чтобы элемент добавлялся только в том случае, если он не более чем в 2 раза больше уже имеющегося максимального элемента
template <class T>
void Container<T>::add(T x)
{
 if(size < MAXSIZE){
    if(size == 0){
        data[size] = x;  // нет проверки на выход за пределы массива (для наглядности)
        size++;
        max = x;
    }
    else if(size > 0){
        if(x < max * 2){
            data[size] = x;  // нет проверки на выход за пределы массива (для наглядности)
            size++;
            if (max < x)
                max = x;
        }
    }
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


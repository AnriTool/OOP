#ifndef CONTAINER_H
#define CONTAINER_H
#include <iostream>
using namespace std;

const int MAX = 100;

template<class T>
class Cont
{
private:
    T data[MAX];
    //int size;
public:
    int size;
    Cont();
    void add(T x);
    void del();
    void info();
    class iterator
    {
    private:
        int index;
        Cont* pdata;
    public:
        iterator();
        iterator(int i, Cont* p);
        Cont::iterator operator++();
        Cont::iterator operator--();
        bool operator <(Cont::iterator x);
        bool operator >(Cont::iterator x);
        bool operator !=(Cont::iterator x);
        bool operator ==(Cont::iterator x);
        T& operator*();
    };

    Cont::iterator begin();
    Cont::iterator end();
    Cont::iterator rbegin();
    Cont::iterator rend();

};

template<class T>
Cont<T>::Cont()
{
    size = 0;
}

template<class T>
void Cont<T>::add(T x){
    if (size < MAX)
    {
        data[size] = x;
        size++;
    }
}

template<class T>
void Cont<T>::del()
{
    if (size > 0)
    {
        size--;
    }
}

template<class T>
void Cont<T>::info()
{
    for (int i = 0; i < size; i++)
        cout << data[i] << ", ";
    cout << endl;
}

template<class T>
Cont<T>::iterator::iterator(){
    index = 0;
    pdata = NULL;
}

template<class T>
Cont<T>::iterator::iterator(int i, Cont<T> *p){
    index = i;
    pdata = p;
}

template<class T>
typename Cont<T>::iterator Cont<T>::iterator::operator++(){
    index++;
    return *this;
}

template<class T>
typename Cont<T>::iterator Cont<T>::iterator::operator--(){
    index--;
    return *this;
}

template<class T>
bool Cont<T>::iterator::operator <(Cont<T>::iterator x){
    return (index <= x.index);
}

template<class T>
bool Cont<T>::iterator::operator >(Cont<T>::iterator x){
    return (index >= x.index);
}

template<class T>
bool Cont<T>::iterator::operator ==(Cont<T>::iterator x){
    return (index == x.index && pdata == x.pdata);
}

template<class T>
bool Cont<T>::iterator::operator !=(Cont<T>::iterator x){
    return (index != x.index || pdata != x.pdata);
}

template<class T>
T& Cont<T>::iterator::operator*()
{
    if (pdata)
    {
        return pdata->data[index];
    }
    else
    {
        throw 0;
    }
}

template<class T>
typename Cont<T>::iterator Cont<T>::begin(){
    return iterator(0, this);
}

template<class T>
typename Cont<T>::iterator Cont<T>::end(){
    return iterator(size, this);
}

template<class T>
typename Cont<T>::iterator Cont<T>::rbegin(){
    return iterator(-1, this);
}

template<class T>
typename Cont<T>::iterator Cont<T>::rend(){
    return iterator(size-1, this);
}



#endif // CONTAINER_H

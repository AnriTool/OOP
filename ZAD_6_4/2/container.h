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
public:
    int size;
    Cont();
    void add(T x);
    void del();
    void info();
    class iterator
    {
    private:
        T sorted[MAX];
        int index;
        Cont* pdata;
        bool zn;
    public:
        iterator();
        iterator(int i, Cont* p, bool plus);
        Cont::iterator operator++();
        Cont::iterator operator--();
        bool operator <(Cont::iterator x);
        bool operator >(Cont::iterator x);
        bool operator !=(Cont::iterator x);
        bool operator ==(Cont::iterator x);
        T& operator*();
        void sort();
    };

    Cont::iterator begin();
    Cont::iterator end();

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
    zn = true;
}

template<class T>
Cont<T>::iterator::iterator(int i, Cont<T> *p, bool plus){
    index = i;
    pdata = p;
    zn = plus;
    this->sort();
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
        if(index != 0 && sorted[index] != sorted[index-1])
            return sorted[index];
        else if (index == 0)
            return sorted[index];
        else{
            while(sorted[index] == sorted[index-1]){
                if (zn){
                    index++;
                }
                else{
                    index--;
                }
            }
            return sorted[index];
        }

    }
    else
    {
        throw 0;
    }
}

template<class T>
typename Cont<T>::iterator Cont<T>::begin(){
    return iterator(0, this, true);
}

template<class T>
typename Cont<T>::iterator Cont<T>::end(){
        return iterator(size-1, this, false);
}


template<class T>
void Cont<T>::iterator::sort(){
    for (int i = 0; i < pdata->size; i++)
        sorted[i] =  pdata->data[i];

    for (int i = 0; i < pdata->size; i++) {
            bool flag = true;
            for (int j = 0; j < pdata->size - (i + 1); j++) {
                if ( sorted[j] > sorted[j + 1]) {
                    flag = false;
                    std::swap(sorted[j], sorted[j + 1]);
              }
            }
            if (flag) {
              break;
            }
    }
}

#endif // CONTAINER_H

#ifndef MYTEMPLATES
#define MYTEMPLATES
/*. Описать шаблон класса для хранения данных. Данные должны храниться, например, в
виде массива. Шаблон должен включать в себя функции добавления данных, удаления
данных, вывода данных на консоль ( info() ) и метод, осуществляющий поиск элемента в
массиве. Метод возвращает -1, если объект не найден, и индекс элемента, если объект
найден. Если искомых объектов больше одного – генерировать исключение.
Предусмотреть также обработку следующих исключений: добавление данных в
заполненный массив, удаление данных из пустого массива. Продемонстрировать работу
шаблона на объектах как встроенного типа, так и собственного класса. Для этого создать
собственный класс и перегрузить в нём нужные функции-операции.*/
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
    void add(T x);
    void del();
    void info();
    void sort();
    int csearch(T x);
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
        data[size] = x;
        size++;
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



template <class T>
int Container<T>::csearch(T x)
{
    int k =0;
    for (int i = 0; i<size; i++){
         if (x == data[i]){
            k++;
            }
        }
    if (k <2){
        for (int i = 0; i < size; i++){
            if (x == data[i]){
                return i;
            }
        }
        return -1;
    }
    else {
        throw Equal();
    }
}
#endif // MYTEMPLATES


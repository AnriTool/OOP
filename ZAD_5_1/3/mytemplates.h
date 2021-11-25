#ifndef MYTEMPLATES
#define MYTEMPLATES




/*
 Определить шаблоны функций, возвращающих количество элементов массива, которые
меньше и больше заданного (т.е. два шаблона функций).



Продемонстрировать работу
шаблона на массивах объектов как встроенного типа, так и собственного класса. Для этого
создать собственный класс и перегрузить в нём нужные функции-операции.
 */

template <class T>
int Less(T *arr, int n, T c){
    int i,k=0;
    for (i = 0; i < n; i++){
        if (arr[i] < c)
            k++;
    }
    return k;
};

template <class T>
int More(T *arr, int n, T c){
    int i,k=0;
    for (i = 0; i < n; i++){
        if (c < arr[i] )
            k++;
    }
    return k;
};


#endif // MYTEMPLATES


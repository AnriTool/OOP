#ifndef MYTEMPLATES
#define MYTEMPLATES

template <class T>
void kv(T *arr, int n)
{
    for(int i = 0; i < n-1; i++)
    {
        arr[i] = arr[i]*arr[i];
    }
}

template <class T>
void kub(T *arr, int n)
{
    for(int i = 0; i < n-1; i++)
    {
        arr[i] = arr[i]*arr[i]*arr[i];
    }
}

template <class T>
void sortDown(T *arr, int n)
{
    T element;
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                element = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = element;
            }
        }
    }
}
#endif // MYTEMPLATES


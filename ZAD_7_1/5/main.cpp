// Пример задачи, в которой используется многопоточное выполнение программы
// Нужно сложить элементы строк матрицы
// Каждая строка суммируется своим  отдельным потоком
/*

Отсортировать элементы строк матрицы по возрастанию. Сортировка элементов каждой
строки выполняется отдельным потоком. Первые 10 элементов первой строки вывести на
консоль для проверки

*/
//


#include <iostream>
#include <vector>
#include <thread>
#include <mutex>

using namespace std;

void add(vector<int> arr, int& sum) // Функция потока, суммирующая элементы массива.
{                                   // Результат записывается в переменную sum, передаваемую по ссылке
    int result = 0;
    for (int element : arr) {
        result = result + element;
    }
    sum = result;
}


void sort(vector<int>& arr,int vectorNumber)
{
    cout << arr.size();
    for (int i = 0; i < vectorNumber; i++) {
        bool flag = true;
        for (int j = 0; j < vectorNumber - (i + 1); j++) {
           if (arr[j] > arr[j + 1]) {
            flag = false;
            swap (arr[j], arr[j + 1]);
          }
        }
        if (flag) {
          break;
        }
      }
}


int main()
{
    int vectorNumber = 10; // Число строк матрицы
    int vectorSize = 1000; // Число столбцов

    // Создаём матрицу - вектор из векторов
    vector<vector<int> > matrix(vectorNumber);
    for (vector<int>& element : matrix)
    {
        element = vector<int>(vectorSize);
    }

    // Заполняем матрицу значениями
    for(int i = 0; i < vectorNumber; i++)
    {
        for(int j = 0; j < vectorSize; j++)
        {
            matrix[i][j] = rand() % 10;
        }
    }

    for(int i = 0; i < vectorNumber; i++)
    {
        for (int j = 0; j < vectorNumber; j++)
            cout << matrix[i][j] << ", " ;
        cout << endl;
    }
    cout <<"------------------------------"<< endl;


    vector<int> vectorOfSum(vectorNumber); //вектор для хранения сумм строк матрицы
    vector<thread> vectorOfTreads(vectorNumber); //вектор потоков
    // создаём потоки
    for(int i = 0; i < vectorNumber; i++)
    {
        //vectorOfTreads[i] = thread(add, matrix[i], ref(vectorOfSum[i]));
        vectorOfTreads[i] = thread(sort, ref(matrix[i]), vectorNumber);
    }

    // ждём завершения всех потоков
    for(int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads[i].join();
    }  

    // выводим результат
    for(int i = 0; i < vectorNumber; i++)
    {
        for (int j = 0; j < vectorNumber; j++)
            cout << matrix[i][j] << ", " ;
         cout << endl;
    }

    return 0;
}

/*

Описать класс «Студент». Написать программу моделирования работы студенческого
офиса. Программа должна обеспечивать начальное формирование данных о всех
студентах в университете. Кроме того, программа должна обеспечивать имитацию
отчисления студента: вводится номер студента, программа удаляет данные о нем из
списка учащихся и записывает данные в список отчисленных. Для представления
необходимых списков использовать шаблонный класс map.

*/

#include <iostream>
#include "student.h"
#include <map>

using namespace std;

int main()
{
    map<string, Student> learning;
    map<string, Student> expelled;

    // Добавляем записи в map. Ключом является номер студента, а значением - сам студент
    learning.insert(pair<string, Student>("S132125", Student("S132125", "Nivorov L.A.")));
    learning.insert(pair<string, Student>("S281257", Student("S281257", "Fedorovna K.V.")));
    learning.insert(pair<string, Student>("S187153", Student("S187153", "Ivanov A.A.")));
    learning.insert(pair<string, Student>("S357123", Student("S357123", "Stechkin M.A.")));
    learning.insert(pair<string, Student>("S132443", Student("S132443", "Volkov M.O.")));
    learning.insert(pair<string, Student>("S231255", Student("S231255", "Kivirova A.V.")));
    learning.insert(pair<string, Student>("S183342", Student("S183342", "Stechko V.O.")));

    // Просим пользователя ввести номер студента для отчисления
    cout << "Input Student number for deduction \n";
    std::string Number;
    cin >> Number;

    // Ищем в списке студента с введённым номером, если он есть включаем его
    // в список отчисления и удаляем из списка учащихся
    map<string, Student>::iterator StudentIterator = learning.find(Number);
    if(StudentIterator != learning.end())
    {
        expelled.insert(pair<string, Student>(StudentIterator->first, StudentIterator->second));
        learning.erase(StudentIterator->first);
    }



    cout << "----Students are learning----\n";
    for (map<string, Student>::iterator it = learning.begin(); it != learning.end(); it++)
    {
        it->second.info();
    }
    cout << "----Students are expelled----\n";
    for (map<string, Student>::iterator it = expelled.begin(); it != expelled.end(); it++)
    {
        it->second.info();
    }



    return 0;
}


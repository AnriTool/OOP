/*
Описать класс «Автобус». Написать программу моделирования работы автобусного
парка. Программа должна обеспечивать начальное формирование данных о всех автобусах
в парке в виде списка. Кроме того, программа должна обеспечивать имитацию выезда
автобуса из парка: вводится номер автобуса, программа удаляет данные об этом автобусе
из списка автобусов, находящихся в парке и записывает данные в список автобусов,
находящихся на маршруте. Послу рабочего дня все автобусы возвращаются в парк: данные
перемещаются из одного списка в другой. Для представления необходимых списков
использовать шаблонный класс list
*/

#include<iostream>
#include"bus.h"
#include<list>

using namespace std;

void printBus(list<Bus> lst){
    for (list<Bus>::iterator it = lst.begin(); it != lst.end(); it++)
    {
        it->info();
    }
}


int main()
{
    list<Bus> inPark;
    list<Bus> onLine;
    std::string busNumber;
    inPark.push_back(Bus("T132BA125rus", "Toyota"));
    inPark.push_back(Bus("T238HB127rus", "Toyota"));
    inPark.push_back(Bus("M282TB125rus", "Nissan"));
    inPark.push_back(Bus("T187MM127rus", "Nissan"));
    inPark.push_back(Bus("B357HA125rus", "Icarus"));
    inPark.push_back(Bus("H132TM127rus", "Icarus"));
do{
    // Просим пользователя ввести номер автобуса для выхода из парка
    cout << "Input bus number or comands: list, end" << endl;

    cin >> busNumber;

    if (busNumber != "end" && busNumber != "list"){
        // Ищем в парке автобус с введённым номером, если он есть включаем его
        // в список автобусов на линии
        for (list<Bus>::iterator it = inPark.begin(); it != inPark.end(); it++)
        {
           if (it->busNumber == busNumber)
           {
                onLine.push_back(*it);

           }
        }
        inPark.remove(Bus(busNumber,""));
    }
    else if (busNumber == "end") {
        for (list<Bus>::iterator it = onLine.begin(); it != onLine.end(); it++)
        {
            inPark.push_back(*it);
        }
        onLine.clear();
        // Выводим на консоль списки автобусов в парке и на линии
        cout << "-----DAY IS END-----" << endl;
        cout << "----Buses in park----"<< endl;
        printBus(inPark);
        cout << "----Buses on line----" << endl;
        printBus(onLine);
    }
    else {
        // Выводим на консоль списки автобусов в парке и на линии
        cout << "----Buses in park----\n";
        printBus(inPark);
        cout << "----Buses on line----\n";
        printBus(onLine);
        cout << endl;
    }

 } while(busNumber != "end");

    return 0;
}

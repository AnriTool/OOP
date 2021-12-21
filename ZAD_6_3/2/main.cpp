/*

 Написать программу «Телефонная книга». Программа должна обеспечивать загрузку в
контейнер типа map базы телефонов и соответствующих им фамилий и формирование по
нему другого контейнера типа map – базы фамилий и соответствующих им телефонов.
Реализовать функции вывода телефона по заданной фамилии и фамилии по заданному
телефону.

 */

#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, string> NumSN; //Номер-фамилия
    map<string, string> SNNum; //Фамилия-номер

    // Добавляем записи в map. Номер и фамилия (номера - случайные)
    NumSN.insert(pair<string, string>("89989947854","Telichko"));
    NumSN.insert(pair<string, string>("89687547854","Ryndin"));
    NumSN.insert(pair<string, string>("89989656455", "Novoselcev"));
    NumSN.insert(pair<string, string>("83219935482", "Li"));
    NumSN.insert(pair<string, string>("89935778532", "Dragunov"));
    NumSN.insert(pair<string, string>("89321574734", "Voskoboinikov"));
    NumSN.insert(pair<string, string>("89040567004", "Skryl"));
    //Заполняем SNNum на основе NumSN
    for(multimap<string, string>::iterator Iterator = NumSN.begin(); Iterator != NumSN.end(); Iterator++)
            SNNum.insert(pair<string, string>(Iterator->second,Iterator->first));

    // Просим пользователя ввести номер машины для выхода из парка
    cout << "Input secondname or number" << endl;
    std::string number;
    cin >> number;

    // Ищем номер, если есть - выводим фамилию
    map<string, string>::iterator Iterator = NumSN.find(number);
    if(Iterator != NumSN.end())
    {
        cout<<Iterator->second<<endl;
    }
    // Ищем фамилию, если есть - выводим номер
    Iterator = SNNum.find(number);
    if(Iterator != SNNum.end())
    {
        cout<<Iterator->second<<endl;
    }


    return 0;
}


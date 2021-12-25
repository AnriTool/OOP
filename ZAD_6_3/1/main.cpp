/*

Написать программу «Англо-русский и русско-английский словарь». Программа
должна обеспечивать загрузку в контейнер типа map базы англо-русского перевода и
формирование по нему другого контейнера типа map – базы русско-английского перевода.
Реализовать функции вывода вариантов перевода заданного слова на альтернативный
язык.

 */

#include <iostream>
#include <windows.h>
#include <map>

using namespace std;

int main()
{
	//Добавляю русские символы
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    map<string, string> EngRus, RusEng;
	string Word;

	//Заполняем EngRus
    EngRus.insert(pair<string, string>("invalid", "недействительный"));
    EngRus.insert(pair<string, string>("bound", "связанный"));
    EngRus.insert(pair<string, string>("limit", "предел"));
    EngRus.insert(pair<string, string>("melon", "арбуз"));

	//Заполняем RusEng на основе EngRus
    for(map<string, string>::iterator BookIt = EngRus.begin(); BookIt != EngRus.end(); BookIt++)
		RusEng.insert(pair<string, string>(BookIt->second,BookIt->first));



    cout  <<"Введите слово: " << endl;
	cin >> Word;



    // Ищем в русско-английском слово
    for(map<string, string>::iterator BookIt = EngRus.begin(); BookIt != EngRus.end(); BookIt++) {
        if (BookIt->first == Word)
            cout<<BookIt->second<<endl;
    }
    // Ищем в русско-английском слово
    for(map<string, string>::iterator BookIt = RusEng.begin(); BookIt != RusEng.end(); BookIt++) {
        if (BookIt->first == Word)
            cout<<BookIt->second<<endl;
    }
	return 0;
}



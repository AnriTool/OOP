/*

 Написать программу «Англо-русский и русско-английский словарь». Программа
должна обеспечивать загрузку в контейнер типа multimap базы англо-русского перевода и
формирование по нему другого контейнера типа multimap – базы русско-английского
перевода. Реализовать функции вывода вариантов перевода заданного слова на
альтернативный язык.

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

	multimap<string, string> EngRus, RusEng;
	string Word;

	//Заполняем EngRus
	EngRus.insert(pair<string, string>("Apple", "Яблоко"));
	EngRus.insert(pair<string, string>("Orange", "Апельсин"));
	EngRus.insert(pair<string, string>("Banana", "Банан"));
	EngRus.insert(pair<string, string>("Melon", "Арбуз"));
	EngRus.insert(pair<string, string>("Watermelon", "Арбуз"));
	EngRus.insert(pair<string, string>("Cherry", "Вишня"));
	EngRus.insert(pair<string, string>("Strawberry", "Клубника"));
	EngRus.insert(pair<string, string>("Blueberry", "Голубика"));
	EngRus.insert(pair<string, string>("Blackberry", "Ежевика"));

	//Заполняем RusEng на основе EngRus
	for(multimap<string, string>::iterator BookIt = EngRus.begin(); BookIt != EngRus.end(); BookIt++)
		RusEng.insert(pair<string, string>(BookIt->second,BookIt->first));


	cout  <<"Введите слово или команду:" <<endl << "!list - для вывода всех слов" << endl;
	cin >> Word;

	do {
		if(Word == "!list")	{

			for(multimap<string, string>::iterator BookIt = EngRus.begin(); BookIt != EngRus.end(); BookIt++) {
				cout<<BookIt->first << " | "<< BookIt->second <<endl;
			}
		}


		else if(Word != "!q" || Word != "!exit") {

			// Ищем в русско-английском слово
			for(multimap<string, string>::iterator BookIt = EngRus.begin(); BookIt != EngRus.end(); BookIt++) {
				if (BookIt->first == Word)
					cout<<BookIt->second<<endl;
			}
			// Ищем в русско-английском слово
			for(multimap<string, string>::iterator BookIt = RusEng.begin(); BookIt != RusEng.end(); BookIt++) {
				if (BookIt->first == Word)
					cout<<BookIt->second<<endl;
			}
		}
	cout << endl << "Введите слово или команды:" <<endl << "!exit или !q - для завершения программы"<<endl << "!list - для вывода всех слов" << endl;
	cin >> Word;
	}
	while ((Word != "!q") && (Word != "!exit") );

	return 0;
}



/*

 �������� ��������� ������-������� � ������-���������� ��������. ���������
������ ������������ �������� � ��������� ���� multimap ���� �����-�������� �������� �
������������ �� ���� ������� ���������� ���� multimap � ���� ������-�����������
��������. ����������� ������� ������ ��������� �������� ��������� ����� ��
�������������� ����.

 */

#include <iostream>
#include <windows.h>
#include <map>

using namespace std;

int main()
{
	//�������� ������� �������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	multimap<string, string> EngRus, RusEng;
	string Word;

	//��������� EngRus
	EngRus.insert(pair<string, string>("Apple", "������"));
	EngRus.insert(pair<string, string>("Orange", "��������"));
	EngRus.insert(pair<string, string>("Banana", "�����"));
	EngRus.insert(pair<string, string>("Melon", "�����"));
	EngRus.insert(pair<string, string>("Watermelon", "�����"));
	EngRus.insert(pair<string, string>("Cherry", "�����"));
	EngRus.insert(pair<string, string>("Strawberry", "��������"));
	EngRus.insert(pair<string, string>("Blueberry", "��������"));
	EngRus.insert(pair<string, string>("Blackberry", "�������"));

	//��������� RusEng �� ������ EngRus
	for(multimap<string, string>::iterator BookIt = EngRus.begin(); BookIt != EngRus.end(); BookIt++)
		RusEng.insert(pair<string, string>(BookIt->second,BookIt->first));


	cout  <<"������� ����� ��� �������:" <<endl << "!list - ��� ������ ���� ����" << endl;
	cin >> Word;

	do {
		if(Word == "!list")	{

			for(multimap<string, string>::iterator BookIt = EngRus.begin(); BookIt != EngRus.end(); BookIt++) {
				cout<<BookIt->first << " | "<< BookIt->second <<endl;
			}
		}


		else if(Word != "!q" || Word != "!exit") {

			// ���� � ������-���������� �����
			for(multimap<string, string>::iterator BookIt = EngRus.begin(); BookIt != EngRus.end(); BookIt++) {
				if (BookIt->first == Word)
					cout<<BookIt->second<<endl;
			}
			// ���� � ������-���������� �����
			for(multimap<string, string>::iterator BookIt = RusEng.begin(); BookIt != RusEng.end(); BookIt++) {
				if (BookIt->first == Word)
					cout<<BookIt->second<<endl;
			}
		}
	cout << endl << "������� ����� ��� �������:" <<endl << "!exit ��� !q - ��� ���������� ���������"<<endl << "!list - ��� ������ ���� ����" << endl;
	cin >> Word;
	}
	while ((Word != "!q") && (Word != "!exit") );

	return 0;
}



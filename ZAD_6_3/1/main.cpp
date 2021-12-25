/*

�������� ��������� ������-������� � ������-���������� ��������. ���������
������ ������������ �������� � ��������� ���� map ���� �����-�������� �������� �
������������ �� ���� ������� ���������� ���� map � ���� ������-����������� ��������.
����������� ������� ������ ��������� �������� ��������� ����� �� ��������������
����.

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

    map<string, string> EngRus, RusEng;
	string Word;

	//��������� EngRus
    EngRus.insert(pair<string, string>("invalid", "����������������"));
    EngRus.insert(pair<string, string>("bound", "���������"));
    EngRus.insert(pair<string, string>("limit", "������"));
    EngRus.insert(pair<string, string>("melon", "�����"));

	//��������� RusEng �� ������ EngRus
    for(map<string, string>::iterator BookIt = EngRus.begin(); BookIt != EngRus.end(); BookIt++)
		RusEng.insert(pair<string, string>(BookIt->second,BookIt->first));



    cout  <<"������� �����: " << endl;
	cin >> Word;



    // ���� � ������-���������� �����
    for(map<string, string>::iterator BookIt = EngRus.begin(); BookIt != EngRus.end(); BookIt++) {
        if (BookIt->first == Word)
            cout<<BookIt->second<<endl;
    }
    // ���� � ������-���������� �����
    for(map<string, string>::iterator BookIt = RusEng.begin(); BookIt != RusEng.end(); BookIt++) {
        if (BookIt->first == Word)
            cout<<BookIt->second<<endl;
    }
	return 0;
}



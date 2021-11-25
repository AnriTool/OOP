#include <iostream>

#include "phrase.h"
/*

Описать класс «фраза», хранящий строку, например, в виде массива символов или поля
типа string.
Предусмотреть конструкторы, инициализирующие объект переданной в параметре строкой или значением по умолчанию.
Предусмотреть метод info(), выводящий на экран информацию об объекте.
Создать следующие методы класса: возвращающий число символов в строке, самое длинное слово и самое короткое слово.

*/











using namespace std;

int main()
{
    Phrase ph1("Thiiiiiis text with long wo"); //фраза, в которой хранится строка с длинным словом в начале и коротким в конце
    Phrase ph2("This text wiiiiiiith lo word"); //фраза, в которой хранится строка с длинным словом в середине и коротким в середине
    Phrase ph3("Th text with long wooooooord"); //фраза, в которой хранится строка с длинным словом в конце и коротким в начале
    ph1.info(); ph2.info(); ph3.info(); //Выводим всю информацию из классов
    cout << ph1.longest() << endl;
    cout << ph2.longest() << endl;
    cout << ph3.longest() << endl;
    cout << ph1.shortest() << endl;
    cout << ph2.shortest() << endl;
    cout << ph3.shortest() << endl;
    cout << ph1.numbers() << endl;
    return 0;
}

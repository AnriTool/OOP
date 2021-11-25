#include <iostream>
#include "symbol.h"


using namespace std;
/*9.
 *  Описать класс «массив символов».
В классе предусмотреть методы удаления и добавления элементов.

Предусмотреть метод info(), выводящий на экран информацию об объекте.

Описать перегруженный оператор ««, добавляющий символ в начало массива.

Описать перегруженный оператор »», удаляющий символ из начала массива и
присваивающий его второму оператору.

Symbol();
Symbol(string c);
void info();
void operator«(char c);
void operator»(int);*/




int main()
{
    Symbol s1;
    Symbol s2("text");
    Symbol *uk;

    s1.add('a');s1.add('b');s1.add('c');
    s2.del();
    s1.info(); s2.info();
    s1<<'b';
    s1.info();
    s1>>s2;
    s1.info();
    s2.info();

    return 0;
}

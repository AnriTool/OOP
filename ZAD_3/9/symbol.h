#ifndef SYMBOL_H
#define SYMBOL_H
#include <iostream>
using namespace std;
/*9.
 *  Описать класс «массив символов».
В классе предусмотреть методы удаления и добавления элементов.

Предусмотреть метод info(), выводящий на экран информацию об объекте.

Описать перегруженный оператор ««, добавляющий символ в начало массива.

Описать перегруженный оператор »», удаляющий символ из начала массива и
присваивающий его второму оператору.
*/


class Symbol
{
private:
public:
    string mass;
    Symbol();
    Symbol(string c);
    void info();
    void add(char c);
    void del();
    void operator<<(char c);
    void operator>>(Symbol c);
};

#endif // SYMBOL_H

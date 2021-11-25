#include "symbol.h"

/*
Описать класс «массив символов».
В классе предусмотреть методы удаления и добавления элементов.

Предусмотреть метод info(), выводящий на экран информацию об объекте.

Описать перегруженный оператор ««», добавляющий символ в начало массива.

Описать перегруженный оператор «»», удаляющий символ из начала массива и
присваивающий его второму оператору.



    Symbol();
    Symbol(string c);
    void info();
    void add(char c);
    void del();
    void operator<<(char c);
    char operator>>(char c);
*/


///////////////////////////////
Symbol::Symbol(){
    mass = "";
}

Symbol::Symbol(string c){
    mass = c;
}

void Symbol::info(){
    cout<<mass<<endl;
}

void Symbol::add(char c){
    mass = mass + c;
}

void Symbol::del(){
    mass.erase(mass.length()-1);
}
////////////////////////////

void Symbol::operator<<(char c){
    mass.insert(mass.begin(),c);
}

void Symbol::operator>>(Symbol c){
    string s = *
    c.mass = mass[0] + c.mass;
    cout << c.mass << endl;
    mass.erase(mass.begin());
}





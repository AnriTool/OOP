#include "phrase.h"


/*

    Phrase();
    Phrase(string text);
    void info(); //Метод info, выводящий информациб об объекте
    string longest(); //Метод возвращающий самое длинное слово
    string shortest(); //Метод возвращающий самое короткое слово
    int numbers(); //Метод возвращающий число символов в строке

*/

Phrase::Phrase(){ //Констурктор без аргументов
   text = "";
}

Phrase::Phrase(string text){ //Конструктор с аргументами, присваивает внутренней переменной text класса Phrase занчение из аргумента text
    this->text = text;
}

void Phrase::info(){ // Вывод информации об объекте
    cout<<text<<endl;
}


string Phrase::longest(){ //Метод, возвращающий самое длинное слово
    int i;
    string first = "", second  = ""; //Переменные нужные для нахождения длинного числа
    for(i = 0; i < text.length(); i++){ //цикл, от 0 до последнего эллемента строки
        if (text[i] == ' '){ //Если я встречаю пробел, который разделяет слова
            if (second.length() < first.length()) //Я проверяю, если длина второго слова меньше чем первого
                second = first; //То, копирую всё с первой строки, во вторую
            first = ""; //А первую строку я обнуляю, чтоб найти следующее слово
        }
        else //Если я не встретил пробел, то добавляю по символу в первое слово
            first += text[i];
    }
   //Перед выводом снова проверяю, не длинее ли уменя первое слово, второго
    if (second.length() < first.length())
        second = first;
    return second; //Возвращаю второе
}

string Phrase::shortest(){ //Метод, возвращающий самое короткое слово
    int i;
    string first = "", second  = "";

    for(i = 0; i < text.length(); i++){
            first += text[i];
            if (text[i] == ' '){
                if ((second.length() > first.length()) || (second  == ""))
                    second = first;
                first = "";
            }
    }
    if (second.length() > first.length())
        second = first;
    return second;
}

int Phrase::numbers(){ //Метод возвращающий колличество символов
    return text.length();
}



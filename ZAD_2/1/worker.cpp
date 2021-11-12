#include "worker.h"

/*

Описать класс «сотрудник», хранящий имя работника, стаж работы, размер заработной
платы в час и количество отработанных часов.

Предусмотреть конструкторы, инициализирующие свойства объектов переданными
данными и значениями по умолчанию.
Предусмотреть метод info(), выводящий на экран информацию об объекте.
Создать методы класса для расчета зарплаты сотрудника, зависящей от количества
отработанных часов и премии, зависящей от стажа работы (например, при стаже до 1 года
премия 0%, до 3 лет премия 5%, до 5 лет премия 8%, свыше 5 лет премия 15%).


class Worker
{
public:
    string name; //Имя
    double exp;//Стаж работы
    double pay; // Оплата в час
    double hours;//Отработано часов
    Worker();
    Worker(string name, double exp, double pay, double hours);
    void info();
    double payday();//метод для расчета зарплаты
};


*/


Worker::Worker()
{
    name = "NONAME";
    exp = pay = hours = 0;
}

Worker::Worker(string name, double exp, double pay, double hours){
    this->name = name;
    this->exp = exp;
    this->pay = pay;
    this->hours = hours;
}

void Worker::info(){
    cout<<name<<"\n Work experience(years):"<<exp<<"\n Salary per hour:"<<pay<<"\n Hours worked:"<<hours<<endl;
}

double Worker::payday(){
    double p = pay * hours;
    if (exp > 5)
        return (p + p*0.15);
    else if (exp > 3)
        return (p + p*0.08);
    else if (exp > 1)
        return (p + p*0.05);
    return p;
}

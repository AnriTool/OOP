#include "student.h"



/*

Описать класс «студент», хранящий имя студента, курс обучения, оценки по пяти
предметам за последнюю сессию и базовый размер стипендии.

Предусмотреть конструкторы, инициализирующие свойства объектов переданными
данными и значениями по умолчанию.

Предусмотреть метод info(), выводящий на экран информацию об объекте.

Создать метод класса для расчета стипендии студента, зависящей от оценок по
дисциплинам (например, при наличии троек стипендия не выплачивается, при средней
оценке от 4 до 4.5 – базовая стипендия, от 4.5 премия 50%, если все оценки 5 премия
100%).


    Student();
    Student(string name, int cours, double mth, double pr, double his, double ec, double ph);
    void info();
    void step();




 */



Student::Student()
{
  name = "empty";
  course = 0;
  math = prog = phys = history = economic = 0;
}

Student::Student(string name, int course, double mth, double pr, double his, double ec, double ph)
{
    this->name = name;
    this->course = course;
    math = mth; prog = pr; phys = ph; history =  his; economic = ec;
}

void Student::info()
{
    cout<<"Name: "<<name<< endl;
    cout<<"Course: "<<course<< endl;
    cout<<"Assessments: "<< endl;
    cout<<"     Math: "<<math<< endl;
    cout<<"     History: "<<history<< endl;
    cout<<"     Physic: "<<phys<< endl;
    cout<<"     Programming: "<<prog<< endl;
    cout<<"     Economic: "<<economic<< endl;
}

void Student::step()
{
    double aver = (math + history + prog + phys + economic)/5;
    if ((math <= 3) || (history<= 3) ||  (prog <= 3) || (phys <= 3) || (economic <= 3))
        cout<< "No grant!" << endl;
    else if (aver == 5)
         cout << "grant + 100%" << endl;
    else if (aver >= 4.5)
         cout << "grant + 50%" << endl;
    else if ((aver >= 4) && (aver <4.5))
        cout << "Standart grant" << endl;
}

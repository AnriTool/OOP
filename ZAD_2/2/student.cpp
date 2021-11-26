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
 */


//Конструктор, без свойств(по умолчанию)
Student::Student()
{
  name = "empty";
  course = 0;
  math = 0 ;
  prog = 0;
  phys = 0;
  history = 0;
  economic = 0;
}
//Конструктор со свойствами
Student::Student(string name, int course, double math, double prog, double history, double economic, double phys)
{
    this->name = name;
    this->course = course;
    this->math = math;
    this->prog = prog;
    this->phys = phys;
    this->history =  history;
    this->economic = economic;
}

void Student::info()
{
    cout<<"Name: "<<name<<" Course: "<<course<<" Math: "<<math<<" History: "<<history<<" Physic: "<<phys <<" Programming: "<<prog<< " Economic: "<<economic<< endl;
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

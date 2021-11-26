#include "date.h"
/*9. Описать класс «дата», хранящий номер дня, месяца и год (как целые числа).
Предусмотреть конструкторы, инициализирующие свойства объектов переданными
данными и значениями по умолчанию.
Предусмотреть метод info(), выводящий на экран информацию об объекте.
Описать операцию преобразования типа int(), выполняющую преобразование момента
даты в целое число – количество суток, прошедшее от начала Новой эры.
Описать операцию преобразования типа char*() или string(), выполняющую
преобразование объекта в строку.(
*/
Date::Date()
{
    d = 0;
    m = 0;
    y = 0;
}

Date::Date(int d,int m,int y)
{
    this->d=d;
    this->m=m;
    this->y=y;
 }

void Date::info()
{
    cout <<d<<'.'<<m<<'.'<<y<< endl;
}

Date::operator int()
{
    int allday=0, mon=m-1, yer=1, i = 1;

    if (d>1){
        allday += d;
    }

    while (mon>0){
        if ((mon == 1) || (mon == 3) || (mon == 5) || (mon == 7) || (mon == 8) || (mon == 10) || (mon == 12))
        {
            allday += 31;
        }
        else if ((mon == 4) || (mon == 6) || (mon == 9) || (mon == 11)){
            allday += 30;
        }
        else if (mon == 2){
            allday += 28;
            }
        mon--;
    }

    while(yer<y){
        if (i == 5){
            allday += 366;
            i = 1;
        }
        else{
            allday += 365;
        }
        i++;
        yer++;
     if ((y % 4 == 0) && (m > 2)){
         allday++;
     }
    }
    return allday;

}

Date::operator string(){
    string s;
    s = to_string(d) + "." + to_string(m) + "." + to_string(y);
    return s;
}

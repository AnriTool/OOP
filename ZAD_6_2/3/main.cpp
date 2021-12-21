/*


Описать класс «Вагон». Предусмотреть в нём элемент данных, хранящий информацию
о типе вагона (должны быть вагоны двух типов: грузовые и пассажирские). Написать
программу для моделирования работы сортировочного тупика: в тупик загоняются вагоны
в произвольном порядке, а потом распределяются оттуда по двум направлениям, в каждом
из которых оказываются вагоны одного типа. Использовать для представления данных
шаблонный класс stack.



*/

#include<iostream>
#include"railcar.h"
#include<stack>

using namespace std;

void printTrains(stack<Railcar> vans){
    stack<Railcar> buffer = vans;
    while(!buffer.empty()){
       buffer.top().info();
       buffer.pop();
    }
}

int main()
{
    stack<Railcar> vans;
    stack<Railcar> cargo, pass;


    vans.push(Railcar("Luckoil", CARGO));
    vans.push(Railcar("Prigorod", PASSENGER));
    vans.push(Railcar("Gazprom", CARGO));
    vans.push(Railcar("NNK", CARGO));
    vans.push(Railcar("Meshgorod", PASSENGER));
    vans.push(Railcar("Metro", PASSENGER));

    //Все вагоны
    cout<<"All trains:" << endl;
    printTrains(vans);

    //Сортирую все вагоны по двум типам
    Railcar now;
    while(!vans.empty()){
       now =  vans.top();
       if (now.type == CARGO)
           cargo.push(now);
       else if (now.type == PASSENGER)
           pass.push(now);
       vans.pop();
    }
    cout<<"-----------------"<<endl<<"All cargo:" << endl;
    printTrains(cargo);
    cout<<"-----------------"<<endl<<"All passenger:" << endl;
    printTrains(pass);


    return 0;
}

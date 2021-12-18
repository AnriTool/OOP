/*


Описать класс «Вагон». Предусмотреть в нём элемент данных, хранящий информацию
о типе вагона (должны быть вагоны двух типов: грузовые и пассажирские). Написать
программу для моделирования работы сортировочной горки: на горку с одной стороны
загоняются вагоны в произвольном порядке, а потом распределяются оттуда с другой
стороны по двум направлениям, в каждом из которых оказываются вагоны одного типа.
Использовать для представления данных шаблонный класс queue.


*/

#include<iostream>
#include"railcar.h"
#include<queue>

using namespace std;

void printTrains(queue<Railcar> vans){
    queue<Railcar> buffer = vans;
    while(!buffer.empty()){
       buffer.front().info();
       buffer.pop();
    }
}

int main()
{
    queue<Railcar> vans;
    queue<Railcar> cargo, pass;


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
       now =  vans.front();
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

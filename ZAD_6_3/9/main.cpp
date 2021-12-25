/* Описать класс «Автомобиль». Написать программу моделирования работы гаража.
 * Программа должна обеспечивать начальное формирование данных обо всех автомобилях
 * в гараже в виде списка. Кроме того, программа должна обеспечивать имитацию
 * выезда автомобиля из гаража: вводится номер автомобиля, программа удаляет
 * данные об этом автомобиле из списка автомобилей, находящихся в парке и
 * записывает данные в список автомобилей, находящихся на выезде.
 * Для представления необходимых списков использовать шаблонный класс map.

Описать класс «Товар». Написать программу моделирования работы склада. Программа
должна обеспечивать начальное формирование данных о всех товарах на складе. Кроме
того, программа должна обеспечивать имитацию отгрузки товара со склада: вводится
наименование товара, программа удаляет данные об этом товаре из списка товаров
находящихся на складе и записывает данные в список товаров, находящихся в пути. Для
представления необходимых списков использовать шаблонный класс map.


*/


#include <iostream>
#include "product.h"
#include <map>

using namespace std;

int main()
{
    map<string, Product> inStock;
    map<string, Product> onLine;

    // Добавляем записи в map. Ключом является номер автомобиля, а значением - сам автомобиль
    inStock.insert(pair<string, Product>("apple", Product("apple", "1236456106")));
    inStock.insert(pair<string, Product>("beer", Product("beer", "47697854647")));
    inStock.insert(pair<string, Product>("chicken", Product("chicken", "647987964")));
    inStock.insert(pair<string, Product>("meet", Product("meet", "2159756622")));
    inStock.insert(pair<string, Product>("rtx3080", Product("rtx3080", "95641654678")));
    inStock.insert(pair<string, Product>("washmachine", Product("washmachine", "15678912223")));
    inStock.insert(pair<string, Product>("teapot", Product("teapot", "25863566254")));

    // Просим пользователя ввести название товара
    cout << "Input Product name to go to line \n";
    std::string name;
    cin >> name;

    // Ищем на складе товар, если он есть включаем его
    // в список товара на линии и удаляем из списка машин в парке
    map<string, Product>::iterator ProductIterator = inStock.find(name);
    if(ProductIterator != inStock.end())
    {
        onLine.insert(pair<string, Product>(ProductIterator->first, ProductIterator->second));
        inStock.erase(ProductIterator->first);
    }


    // Выводим на консоль списки машин в парке и на линии
    cout << "----Products on stock----\n";
    for (map<string, Product>::iterator it = inStock.begin(); it != inStock.end(); it++)
    {
        it->second.info();
    }
    cout << "----Products on line----\n";
    for (map<string, Product>::iterator it = onLine.begin(); it != onLine.end(); it++)
    {
        it->second.info();
    }



    return 0;
}


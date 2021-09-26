#ifndef COMPX_H
#define COMPX_H

//перечисление для задания вида комплексного числа: действительное, мнимое, комплексное.
enum types {valid, imaginary, complex};

struct comp{ // Комплексное число имеет вид записи (a + bi), где a,b - вещественные числа, i - мнимая единица
    double a;
    double b; //bi
};
//Объявляю функции для сложения и вычитания комп. чисел. Результат тоже будет комп. числом, поэтому у функции тип complex
comp CSum(comp x, comp y);
comp CDif(comp x, comp y);

//Объявляю функцию для вывода комп. числа
void PrintComp(comp x);
//Объявляю функцию для вида числа
int type(comp x);



#endif // COMPX_H

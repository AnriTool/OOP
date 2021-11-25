#include "matrix.h"

/*

    Matrix(); //Конструктор без параметров
    Matrix(double x1,double x2,double x3,double x4); //Конструктор с параметрами
    Matrix(double x); //Конструктор, преобразования из вещественного числа в матрицу
    void info();
    operator double();
    operator string();

*/

Matrix::Matrix()
{
    a[0][0] = a[1][0] = a[0][1] = a[1][1] = 0; //Заполяню всё нулями
}
Matrix::Matrix(double x1,double x2,double x3,double x4){
    a[0][0] = x1; a[0][1] = x2;
    a[1][0] = x3; a[1][1] = x4;
}


Matrix::Matrix(double x)
{
    a[0][0] = a[1][0] = a[0][1] = a[1][1] = x; //Заполяню всё нулями
}

void Matrix::info(){
    cout << a[0][0] << ' ' <<  a[0][1]<< '\n' <<  a[1][0] << ' ' <<  a[0][1] << endl;
}

Matrix::operator double(){
    return (a[0][0] * a[1][1] - a[0][1] * a[1][0]);
}

Matrix::operator string(){
    string s = "";
    s += to_string(a[0][0]) + ' ' + to_string(a[0][1]) + '\n' + to_string(a[1][0]) + ' ' + to_string(a[1][1]);
    return s;
}

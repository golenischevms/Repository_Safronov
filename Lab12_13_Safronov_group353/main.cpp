#include <iostream>
#include <stdio.h>
#include <iomanip>
#include "title.h"
#include <cmath>
#include <vector>

// Автор: Сафронов И. А.
// Группа: ЕТ-253
// Тема: Параметры функций

using namespace std;


// Структура для удобства
struct TableOfValues
{
    unsigned int position;
    double x;
    double fun1;
    double fun2;
    double fun3;
};

// Расчет значений сразу всех функций
vector <TableOfValues> CalculateFunctions(double& a, double& b, unsigned  int& N)
{
    /*
    "1) u(i)=5*i^2*cos(0.1*i)
    "2) u(i)=i^3*exp(-0.3*i)
    3) u(i)=4*i*sqrt(i)*exp(-sqrt(i))
   */
    vector <TableOfValues> myResults(N+1);
    for (int i=0; i<N+1; i++)
    {
        myResults[i].position = i+1;
        myResults[i].x=a+i*(b-a)/N;
        myResults[i].fun1=5*i*pow(i,2)*cos(0.1*i); // Аргумент косинуса в радианах задается!
        myResults[i].fun2=pow(i,3)*exp(-0.3*i);
        myResults[i].fun3=4*i*sqrt(i)*exp(-sqrt(i));
    }
    return myResults;
}

// Вывод таблицы красивой, благодаря внешней библиотеки с GitHub
void PrintTableOfFunction(vector <TableOfValues>& Values)
{
    std::cout << "Position" << std::setw( 30 ) << std::left
              << std::setw( 30 ) << "    x"
              << std::setw( 30 ) << "F1(x)"
              << std::setw( 30 ) << "F2(x)"
              << std::setw( 30 ) << "F3(x)"
              << std::endl;
    for (int i=0; i< Values.size(); i++)
    {
        std::cout << Values[i].position << std::setw( 30 ) << std::right
                  << std::setw( 30 ) << Values[i].x
                  << std::setw( 30 ) << Values[i].fun1
                  << std::setw( 30 ) << Values[i].fun2
                  << std::setw( 30 ) << Values[i].fun3
                  << std::endl;
    }
    system("pause");
}

int main()
{
    TitleGenerate();
    Description();
    double a, b = 0;
    unsigned int N = 0;
    cout << " Enter the boundaries of the segment [a,b]:" << endl;
    cin >> a >> b;
    cout << " Enter the number of function values:" << endl;
    cin >> N;
    vector <TableOfValues> results;
    results = CalculateFunctions(a, b, N);
    PrintTableOfFunction(results);
    return 0;
}

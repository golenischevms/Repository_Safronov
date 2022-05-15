#pragma once

//файл, генерирующий титульный лист.
#include <iostream>
#include <stdio.h>
using namespace std;

// Генерация титульной страницы
void TitleGenerate()
{
    setlocale(LC_ALL, "Russian");
    cout << "" << endl;
    cout << "         МИНИСТЕРСТВО НАУКИ И ВЫСШЕГО ОБРАЗОВАНИЯ РОССИЙСКОЙ ФЕДЕРАЦИИ" << endl;
    cout << "       Федеральное государственное автономное образовательное учреждение" << endl;
    cout << "       высшего образования \"Южно-Уральский государственный университет" << endl;
    cout << "                  (национальный исследовательский университет)\"" << endl;
    cout << "                      Институт естественных и точных наук" << endl;
    cout << "             Кафедра \"Прикладная математика и программирование\"" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "                        Программа \"Параметры функций\"" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "                                                       Выполнил:" << endl;
    cout << "                                                       Студент группы ЕТ-253 "<< endl;
    cout << "                                                       И. А. Сафронов" << endl;
    cout << "" << endl;
    cout << "                                                       Проверил: преподаватель" << endl;
    cout << "                                                       В. А. Сурин" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "                              Челябинск 2022" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    system("pause");
    system("cls");
} 

// Описание задания
void Description()
{
    cout << "Вариант №12" << endl;
    cout << "Заданы функции:" << endl;
    cout << "" << endl;
    cout << "1) u(i)=5*i^2*cos(0.1*i)" << endl;
    cout << "2) u(i)=i^3*exp(-0.3*i)" << endl;
    cout << "3) u(i)=4*i*sqrt(i)*exp(-sqrt(i))" << endl;
    cout << "" << endl;
    system("pause");
}

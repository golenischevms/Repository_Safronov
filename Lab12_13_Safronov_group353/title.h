#pragma once

//����, ������������ ��������� ����.
#include <iostream>
#include <stdio.h>
using namespace std;

// ��������� ��������� ��������
void TitleGenerate()
{
    setlocale(LC_ALL, "Russian");
    cout << "" << endl;
    cout << "         ������������ ����� � ������� ����������� ���������� ���������" << endl;
    cout << "       ����������� ��������������� ���������� ��������������� ����������" << endl;
    cout << "       ������� ����������� \"����-��������� ��������������� �����������" << endl;
    cout << "                  (������������ ����������������� �����������)\"" << endl;
    cout << "                      �������� ������������ � ������ ����" << endl;
    cout << "             ������� \"���������� ���������� � ����������������\"" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "                        ��������� \"��������� �������\"" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "                                                       ��������:" << endl;
    cout << "                                                       ������� ������ ��-253 "<< endl;
    cout << "                                                       �. �. ��������" << endl;
    cout << "" << endl;
    cout << "                                                       ��������: �������������" << endl;
    cout << "                                                       �. �. �����" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "                              ��������� 2022" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    system("pause");
    system("cls");
} 

// �������� �������
void Description()
{
    cout << "������� �12" << endl;
    cout << "������ �������:" << endl;
    cout << "" << endl;
    cout << "1) u(i)=5*i^2*cos(0.1*i)" << endl;
    cout << "2) u(i)=i^3*exp(-0.3*i)" << endl;
    cout << "3) u(i)=4*i*sqrt(i)*exp(-sqrt(i))" << endl;
    cout << "" << endl;
    system("pause");
}

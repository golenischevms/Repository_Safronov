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
    cout << "          ��������� \"���������� ��������� � �������� ���������\"" << endl;
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
    cout << "��������� ���������� ���������, ����������� �������� ������, ���� ����� �" << endl;
    cout << "������������ [x,y] �������� ���������� ������ �������� � ��������� {[1,1],[0,1],[0,0],[1,0]}" << endl;
    cout << "��� ������������ � ��������� {[2,0],[2,2],[4,0]}. ��������� �������� ��������� ���" << endl;
    cout << "��������� ��������� �����: {[0.5,0.5],[3,0.5],[1,2]}" << endl;
    cout << "" << endl;
    cout << "�������:" << endl;
    cout << "" << endl;
}

void DescriptionPart2()
{
    cout << "��������� �������� �������� �������� ������� � �������� ����� M(x,y):" << endl;
    cout << "1. y(x)=x ��� x>1, y(x)=1+x ��� x<=1 " << endl;
    cout << "2. a(x,y)=y/x ��� x>0 � y>0, a(x,y)=x ��� x>0 � y<=0," << endl;
    cout << "   a(x,y)=xy ��� x<=0 � y>0, a(x,y)=y ��� x<=0 � y<=0" << endl;
    cout << "" << endl;
    cout << "�������:" << endl;
    cout << "" << endl;
}

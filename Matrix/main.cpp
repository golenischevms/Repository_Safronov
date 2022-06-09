#include <iostream>
#include "title.h"
#include <vector>

using namespace std;

// Вывод матрицы на экран
void DisplayMatrix(vector <vector<double>>& Matrix, unsigned int& N, unsigned int& M)
{
    cout << "" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << Matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "" << endl;
}

//Сортировка матрицы
vector <vector<double>> SortMatrix(vector <vector<double>> Matrix, unsigned int& M, unsigned int& N)
{
    double temp, pos;
    for (int i=0; i<N; i++)
    {
        temp=Matrix[i][0]; pos=0;
        for (int j=0; j<M; j++)
        {
            if (abs(Matrix[i][j])>abs(temp))   { temp=Matrix[i][j]; pos=j;}
        }
        Matrix[i][pos]=Matrix[i][i];
        Matrix[i][i]=temp;
    }
    return Matrix;
}

int main()
{
    TitleGenerate();
    Description();
    unsigned int N,M = 0;
    cout << "Matrix A has size NxM, N is the number of rows, M is the number of columns." << endl;
    cout << "Specify the dimensions of the matrix N, M separated by a space:" << endl;
    cin >> N >> M;
    vector <vector<double>> MatrixA(N, vector<double> (M));
    cout << "Enter the elements of matrix A line by line:" << endl;
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<M; j++)
        {
            cin >> MatrixA [i][j];
        }
    }
    cout << "Matrix A: "<< endl;
    DisplayMatrix(MatrixA,N,M);
    cout << "Sorted Matrix B:";
    vector <vector<double>> MatrixB = SortMatrix(MatrixA, N, M);
    DisplayMatrix(MatrixB, N, M);
    cout << "The program has successfully completed its work." << endl;
    return 0;
}

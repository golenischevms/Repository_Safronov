#include <iostream>
#include <cmath>
#include "title.h"

// Автор: Сафронов И. А.
// Группа: ЕТ-253
// Тема: Логические выражения

using namespace std;

// Входит ли точка в квадрат (включая границы, потому неравинства нестрогие)
bool IsPointInSquare(double x, double y)
{
    // Вершины квадрата {[1,1],[0,1],[0,0],[1,0]}
    bool f = (x>=0) || (x <=1);
    bool s = (y>=0)|| (y<=1);
    return f && s && abs(x)+abs(y) <=1;
}

// Площадь треугольника (формула Герона)
double TriangleSquare(double& a, double& b, double& c){
   double p=(a+b+c)/2;
   return sqrt(p*(p-a)*(p-b)*(p-c));
}

// Входит ли точка M в треугольник (метод сравнения площадей)
bool IsPointInTriangle(double x, double y)
{
    // Вершины треугольника ABC {[2,0],[2,2],[4,0]}
    double AB = sqrt(pow((2-2),2)+pow((2-0),2));
    double BC = sqrt(pow((4-2),2)+pow((0-2),2));
    double CA = sqrt(pow((2-4),2)+pow((0-0),2));
    double AM = sqrt(pow((x-2),2)+pow((y-0),2));
    double BM = sqrt(pow((x-2),2)+pow((y-2),2));
    double CM = sqrt(pow((x-4),2)+pow((y-0),2));
    double SumOfAreas = TriangleSquare(AM,BM,AB)+TriangleSquare(AM,CM,CA)+TriangleSquare(BM,CM,BC);
    return SumOfAreas==TriangleSquare(AB,BC,CA);
}

void СhekingPoints()
{
    cout << "The following points belong to the square ABCD, triangle ABC:" << endl;
    cout << "1. E(0.5,0.5): " << boolalpha << IsPointInSquare(0.5,0.5) << " "<< IsPointInTriangle(0.5,0.5) << endl;
    cout << "2. F(3,0.5): " << boolalpha << IsPointInSquare(3,0.5) << " "<< IsPointInTriangle(3,0.5) << endl;
    cout << "3. G(1,2): " << boolalpha << IsPointInSquare(1,2) << " "<< IsPointInTriangle(1,2) << endl;
}

/*    cout <<
 *    "1. y(x)=x при x>1, y(x)=1+x при x<=1 " << endl; "2. a(x,y)=y/x при x>0 и y>0, a(x,y)=x при x>0 и y<=0," << endl;
    cout << "   a(x,y)=xy при x<=0 и y>0, a(x,y)=y при x<=0 и y<=0" << endl;*/

double Fun1(double& x)
{
   double F=0;
   if (x>1)
   {
       F=x;
   }
   else
   {
       F=1+x;
   }
   return F;
}

double Fun2(double& x, double& y)
{
    double F=0;
    if (x>0 && y>0)
    {
        F=y/x;
    }
    else if (x>0 && y<=0)
    {
        F=x;
    }
    else if (x<=0 && y>0)
    {
        F=x*y;
    }
    else
    {
        F=y;
    }
    return F;
}

void CalculateFunctions(double& x, double& y)
{
    cout << "y(x) = " << Fun1(x) << endl;
    cout << "a(x,y) = " << Fun2(x,y) << endl;
}

// «Keep it simple, stupid!»
int main()
{
    // Часть 1
    TitleGenerate();
    Description();
    // Точка М(x,y) - общая для части 1 и 2.
    double x,y =0;
    cout << "Enter M[x,y]:" << endl;
    cin >> x >> y;
    cout << "The point M belongs to the square ABCD {[1,1],[0,1],[0,0],[1,0]}:" << endl;
    cout << boolalpha << IsPointInSquare(x,y) << endl;
    cout << "The point M belongs to the triangle ABC {[2,0],[2,2],[4,0]}:" << endl;
    cout << boolalpha << IsPointInTriangle(x,y) << endl;
    СhekingPoints();
    // Часть 2
    DescriptionPart2();
    CalculateFunctions(x,y);
    system("pause");
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int Tringle(double a, double b, double c)
{
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

double Area(double a, double b, double c)
{
    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

int main()
{
    double a, b, c;
    cout << "输入三角形三边边长:";
    cin >> a >> b >> c;
    int T_Or_F = Tringle(a, b, c);
    if (T_Or_F == 1)
    {
        double area = Area(a, b, c);
        cout << "三角形面积为:" << area << endl;
    }
    else
    {
        cout << "错误：不能构成三角形！" << endl;
    }
}
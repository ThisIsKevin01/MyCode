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
    cout << "�������������߱߳�:";
    cin >> a >> b >> c;
    int T_Or_F = Tringle(a, b, c);
    if (T_Or_F == 1)
    {
        double area = Area(a, b, c);
        cout << "���������Ϊ:" << area << endl;
    }
    else
    {
        cout << "���󣺲��ܹ��������Σ�" << endl;
    }
}
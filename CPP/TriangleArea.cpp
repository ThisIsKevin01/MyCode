#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    cout << "�������������߱߳�:";
    cin >> a >> b >> c;
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
    {
        cout << "���󣺲��ܹ��������Σ�" << endl;
    }
    else
    {
        double s = (a + b + c) / 2;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "���������Ϊ:" << area << endl;
    }
}
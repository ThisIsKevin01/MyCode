#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    cout << "输入三角形三边边长:";
    cin >> a >> b >> c;
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
    {
        cout << "错误：不能构成三角形！" << endl;
    }
    else
    {
        double s = (a + b + c) / 2;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "三角形面积为:" << area << endl;
    }
}
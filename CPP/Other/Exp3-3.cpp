#include <iostream>
using namespace std;
void DevideNum(int x, char y, int a = 0)
{
    char num;
    if (x > 0)
    {
        num = x % 10 + '0';
        x /= 10;
        DevideNum(x, y, ++a);
        (a == 1) ? (cout << num):(cout << num << y);
    }
}

int main()
{
    int x;
    char y;
    cout << "������������ĸ:";
    cin >> x >> y;
    DevideNum(x, y);
}
#include <iostream>
using namespace std;
void DevideNum(int x, char y)
{
    char num;
    if (x > 0)
    {
        num = x % 10 + '0';
        x /= 10;
        DevideNum(x, y);

    }
}

int main()
{
    int x;
    char y;
    cout << "��������:";
    cin >> x;
    cout << "������ĸ:";
    cin >> y;
    DevideNum(x, y);
}
#include <iostream>
using namespace std;

int F(int n)
{
    int mul = 0;
    int num = 1;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            num *= n;
        }
        mul += num;
        num = 1;
    }
    return mul;
}

int main()
{
    int n = 2;
    int mul = F(n);
    cout << mul << endl;
}
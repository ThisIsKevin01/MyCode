#include <iostream>
using namespace std;
int Factorial(int n)
{
    int mul = 1;
    if (n == 0)
        return 1;
    else
    {
    for (int i = 1; i <= n; i++)
        mul *= i;
    return mul;
    }
}

int main()
{
    int m, n, CombineNum;
    cout << "������������(n > m)" << endl;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    if (n <= 0 || m > n || m < 0)
        cout << "�����������" << endl;
    else if (n >= m)
    {
        CombineNum = Factorial(n) / (Factorial(n - m) * Factorial(m));
        cout << "���Ϊ:" << CombineNum;
    }
}
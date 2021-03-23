#include <iostream>
using namespace std;
double Formular(double a, int n)
{
    if (n >= 0)
    {
        if (n == 0)
            return a / 2.0;
        return (Formular(a, n - 1) + a / Formular(a, n - 1)) / 2;
    }
}

int main()
{
    int a = 2;
    cout << Formular(3, 20);
}
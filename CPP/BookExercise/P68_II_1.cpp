#include <iostream>
using namespace std;
//
void P68_II_1(int a, int b, int c)
{
    int x, y;
    x = (a >= b ? a : b);
    x = (x >= c ? x : c);
    y = (b >= c ? b : c);
    cout << x;
}

int main()
{
    P68_II_1(42, 64, 231);
}
#include <iostream>
using namespace std;

void Binary(int x, int &bin)
{
    if (x > 0)
    {
        Binary(x / 2, bin);
        bin *= 10;
        bin += x % 2;
        x /= 2;
    }
}

int main()
{
    int bin = 0;
    Binary(5, bin);
    cout << bin;
}
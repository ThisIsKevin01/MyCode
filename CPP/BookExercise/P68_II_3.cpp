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
/*     int bin = 0;
    Binary(5, bin);
    cout << bin; */
    int bin = 0;
    cout << "decimal"
         << "\t\t"
         << "binary"
         << "\t\t"
         << "octal"
         << "\t\t"
         << "hexadecimal" << endl;
    for (int i = 1; i <= 256; i++)
    {
        Binary(i, bin);
        cout << dec << i << "\t\t";
        cout << dec << bin << "\t\t";

        cout << oct << i << "\t\t";
        cout << hex << i << "\t\t";
        cout << '\n';
        bin = 0;
    }
}
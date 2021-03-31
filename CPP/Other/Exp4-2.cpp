#include <iostream>
using namespace std;
int main()
{
    char a[100], b[100], c[200];
    int sign = 0;
    cout << "ÊäÈë×Ö·û´®a->";
    cin >> a;
    cout << "ÊäÈë×Ö·û´®b->";
    cin >> b;
    for (int i = 0; i < 100; i++)
    {
        if (a[i] != '\0')
        {
            c[i] = a[i];
        }
        else
        {
            sign = i;
            break;
        }
    }
    for (int j = 0; j < 100; j++)
    {
        c[sign + j] = b[j];
        if (b[j] == '\0')
        {
            break;
        }
    }
    cout << "Æ´½Ó×Ö·û´®c:" << c << endl;
}
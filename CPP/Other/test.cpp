#include <iostream>
using namespace std;
int main()
{
    char a[100];
    cin >> a;
    for (int i = 0;i < 100; i++)
    {
        if (a[i] != '\0')
        {
            cout << a[i] << endl;
        }
        else if (a[i] == '\0')
        {
            cout << "Test";
            break;
        }
    }
}
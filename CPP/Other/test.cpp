#include <iostream>
#include <cstdio>
using namespace std;
inline int isnumber(char);
int main()
{
    char c;
    int n;
    n = 0;
    while ((c = getchar()) != '\n')
        if (isnumber(c))
            n++;
    cout << "n = " << n << endl;
}

int isnumber(char ch)
{
    return (ch >= '0' && ch <= '9') ? 1 : 0;
}
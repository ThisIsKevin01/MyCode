#include <iostream>
using namespace std;

void print(int w)
{
    if (w > 0)
    {
        print(w - 1);
        for (int i = 1; i <= w; i++)
        {
            cout << w << " ";
        }
        cout << endl;
    }
}

int main()
{
    print(5);
}
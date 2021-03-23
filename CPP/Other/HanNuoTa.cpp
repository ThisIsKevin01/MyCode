#include <iostream>
using namespace std;
void Move(int n, char a, char b, char c, int &step)
{
    if (n == 1)
        cout << a << "-->" << c << endl;
    else
    {
        Move(n - 1, a, b, c, step);
        cout << "Step" << step++ << '\t' << a << "-->" << c << endl;
        Move(n - 1, b, a, c, step);
    }
}

int main()
{
    int m, step = 1;
    cout << "Input the number of disks:" << endl;
    cin >> m;
    Move(m, 'A', 'B', 'C', step);
}
#include <iostream>
using namespace std;
int main()
{
    int code = 0;
    cout << "ÊäÈëÁùÎ»Ã÷Âë:";
    cin >> code;
    int incode = 0;
    int num = 0;
    for (int i = 0; i < 6; i++)
    {
        num = code % 10;
        code /= 10;
        incode *= 10;
        incode += (num + 7) % 10;
    }
    cout << incode << endl;

}
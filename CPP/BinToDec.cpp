#include <iostream>
using namespace std;
int main()
{
    int Dec = 0;
    char ch;
    cout << "ÊäÈë:";
    do
    {
        do
        {
            cin.get(ch);
        } while (ch != '0' && ch != '1');
        do
        {
            Dec *= 2;
            Dec += ch - '0';
            cin.get(ch);
        } while (ch == '0' || ch == '1');
    } while (ch != 10);

    cout << Dec << endl;
}
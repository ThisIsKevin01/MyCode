#include <iostream>
using namespace std;
int main()
{
    char Player1, Player2;
    cout << "Player1(剪刀s,石头r,布p):";
    cin >> Player1;
    cout << "Player2(剪刀s,石头r,布p):";
    cin >> Player2;
    //p布(1) < r石头(3) < s剪刀(4)
    switch (Player1 - Player2)
    {
    case 0:
        cout << "平" << endl;
        break;
    case 1:
    case 2:
    case -3:
        cout << "Player2胜" << endl;
        ;
        break;
    case -2:
    case -1:
    case 3:
        cout << "Player1胜" << endl;
        break;
    default:
        break;
    }
}
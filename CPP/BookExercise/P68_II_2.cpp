#include <iostream>
using namespace std;
int main()
{
    char Player1, Player2;
    cout << "Player1(����s,ʯͷr,��p):";
    cin >> Player1;
    cout << "Player2(����s,ʯͷr,��p):";
    cin >> Player2;
    //p��(1) < rʯͷ(3) < s����(4)
    switch (Player1 - Player2)
    {
    case 0:
        cout << "ƽ" << endl;
        break;
    case 1:
    case 2:
    case -3:
        cout << "Player2ʤ" << endl;
        ;
        break;
    case -2:
    case -1:
    case 3:
        cout << "Player1ʤ" << endl;
        break;
    default:
        break;
    }
}
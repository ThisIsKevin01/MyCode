#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int Restart = 1;
    while (1 == Restart)
    {
        srand((unsigned)time(NULL));
        int Random = rand() % 2000 + 1;
        int Input = 0;
        //cout << Random;
        cout << "输入数字:";
        cin >> Input;
        for (int i = 1; i <= 10; i++)
        {
            if (Input > Random && i != 10)
            {
                cout << "第" << i << "次猜测数字过大，重新输入:";
                cin >> Input;
            }
            else if (Input < Random && i != 10)
            {
                cout << "第" << i << "次猜测数字过小，重新输入:";
                cin >> Input;
            }
            else if (Input == Random)
            {
                cout << "猜中了，一共猜了" << i << "次。" << endl;
                cout << "输入1进行下一轮，0结束猜测:";
                cin >> Restart;
                if (0 == Restart) {cout << "结束游戏" << endl;}
                break;
            }
            if (i == 10)
            {
                cout << "已经猜了10次，失败，数字为"<< Random <<"。输入1进行下一轮，0结束猜测:";
                cin >> Restart;
                if (0 == Restart) {cout << "结束游戏" << endl;}
            }
        }
    }
}
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
        cout << "��������:";
        cin >> Input;
        for (int i = 1; i <= 10; i++)
        {
            if (Input > Random && i != 10)
            {
                cout << "��" << i << "�β²����ֹ�����������:";
                cin >> Input;
            }
            else if (Input < Random && i != 10)
            {
                cout << "��" << i << "�β²����ֹ�С����������:";
                cin >> Input;
            }
            else if (Input == Random)
            {
                cout << "�����ˣ�һ������" << i << "�Ρ�" << endl;
                cout << "����1������һ�֣�0�����²�:";
                cin >> Restart;
                if (0 == Restart) {cout << "������Ϸ" << endl;}
                break;
            }
            if (i == 10)
            {
                cout << "�Ѿ�����10�Σ�ʧ�ܣ�����Ϊ"<< Random <<"������1������һ�֣�0�����²�:";
                cin >> Restart;
                if (0 == Restart) {cout << "������Ϸ" << endl;}
            }
        }
    }
}
#include <iostream>
using namespace std;

void BinToDec() //������ת��ʮ����
{
    int Dec = 0;
    char ch;
    cout << "����:";
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
    } while (ch != '\x0a');

    cout << Dec << endl;
}

void Square() //����߳���ӡ������
{
    int n = 0;
    cout << "���������εı߳�(1~20):";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n)
                cout << "*  ";
            else if (j == 1 || j == n)
                cout << "*  ";
            else
                cout << "   ";
        }
        cout << "\n";
    }
}

int main()
{
    //BinToDec(); //������ת��ʮ����
    //Square();   //����߳���ӡ������
}
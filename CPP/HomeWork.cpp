#include <iostream>
using namespace std;

void BinToDec() //������ת��ʮ����
{
    int Dec = 0;
    char ch;
    cout << "���������:";
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

    cout << "ת��Ϊʮ����:" << Dec << endl;
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

void Encode() //����
{
    int code = 0;
    cout << "������λ����:";
    cin >> code;
    int encode = 0, num = 0;
    for (int i = 0; i < 6; i++)
    {
        num = code % 10;
        code /= 10;
        encode *= 10;
        encode += (num + 7) % 10;
    }
    cout << "����Ϊ:" << encode << endl;
}

void Decode() //����
{
    int encode = 0;
    cout << "����һ����λ����:";
    cin >> encode;
    int code = 0, num = 0;
    for (int i = 0; i < 6; i++)
    {
        code *= 10;
        num = encode % 10;
        encode /= 10;
        if (num >= 7)
            code += num - 7;
        else
            code += num + 3;
    }
    cout << "����Ϊ:" << code << endl;
}

int main()
{
    //BinToDec(); //������ת��ʮ����
    //Square();   //����߳���ӡ������
    //Encode();   //����
    //Decode();   //����
}
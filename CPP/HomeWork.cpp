#include <iostream>
using namespace std;

void BinToDec() //二进制转换十进制
{
    int Dec = 0;
    char ch;
    cout << "输入二进制:";
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

    cout << "转化为十进制:" << Dec << endl;
}

void Square() //输入边长打印正方形
{
    int n = 0;
    cout << "输入正方形的边长(1~20):";
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

void Encode() //加密
{
    int code = 0;
    cout << "输入六位明码:";
    cin >> code;
    int encode = 0, num = 0;
    for (int i = 0; i < 6; i++)
    {
        num = code % 10;
        code /= 10;
        encode *= 10;
        encode += (num + 7) % 10;
    }
    cout << "密码为:" << encode << endl;
}

void Decode() //解密
{
    int encode = 0;
    cout << "输入一到六位密码:";
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
    cout << "明码为:" << code << endl;
}

int main()
{
    //BinToDec(); //二进制转换十进制
    //Square();   //输入边长打印正方形
    //Encode();   //加密
    //Decode();   //解密
}
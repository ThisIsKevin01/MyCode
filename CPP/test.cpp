#include <iostream>
using namespace std;
int main()
{
    int encode = 0;
    cout << "输入一到六位密码:";
    cin >> encode;
    int code = 0, num = 0, encode_copy = encode;
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
    cout << code << endl;

}
#include <iostream>
using namespace std;

void Devide(int Number, int Count)
{
   int Numbers[5] = {0};
   switch (Count)
   {
   case 5:
      Numbers[4] = Number / 10000;
      Number -= Numbers[4] * 10000;
      cout << "万位为:" << Numbers[4] << endl;
   case 4:
      Numbers[3] = Number / 1000;
      Number -= Numbers[3] * 1000;
      cout << "千位为:" << Numbers[3] << endl;
   case 3:
      Numbers[2] = Number / 100;
      Number -= Numbers[2] * 100;
      cout << "百位为:" << Numbers[2] << endl;
   case 2:
      Numbers[1] = Number / 10;
      Number -= Numbers[1] * 10;
      cout << "十位为:" << Numbers[1] << endl;
   case 1:
      Numbers[0] = Number;
      cout << "个位为:" << Numbers[0] << endl;
      break;
   }
   cout << "逆序输出:";
   for (int i = 0;i < Count; i++)
   {
      cout << Numbers[i];
   }
}

int main()
{
   int Number = 0;
   int Count = 0;
   cout << "输入整数:" << endl;
   cin >> Number;
   if (Number > 9999)
   {
      cout << "该数字为五位数" << endl;
      Count = 5;
   }
   else if (Number > 999)
   {
      cout << "该数字为四位数" << endl;
      Count = 4;
   }
   else if (Number > 99)
   {
      cout << "该数字为三位数" << endl;
      Count = 3;
   }
   else if (Number > 9)
   {
      cout << "该数字为两位数" << endl;
      Count = 2;
   }
   else
   {
      cout << "该数字为一位数" << endl;
      Count = 1;
   }
   Devide(Number, Count);
}

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
      cout << "��λΪ:" << Numbers[4] << endl;
   case 4:
      Numbers[3] = Number / 1000;
      Number -= Numbers[3] * 1000;
      cout << "ǧλΪ:" << Numbers[3] << endl;
   case 3:
      Numbers[2] = Number / 100;
      Number -= Numbers[2] * 100;
      cout << "��λΪ:" << Numbers[2] << endl;
   case 2:
      Numbers[1] = Number / 10;
      Number -= Numbers[1] * 10;
      cout << "ʮλΪ:" << Numbers[1] << endl;
   case 1:
      Numbers[0] = Number;
      cout << "��λΪ:" << Numbers[0] << endl;
      break;
   }
   cout << "�������:";
   for (int i = 0;i < Count; i++)
   {
      cout << Numbers[i];
   }
}

int main()
{
   int Number = 0;
   int Count = 0;
   cout << "��������:" << endl;
   cin >> Number;
   if (Number > 9999)
   {
      cout << "������Ϊ��λ��" << endl;
      Count = 5;
   }
   else if (Number > 999)
   {
      cout << "������Ϊ��λ��" << endl;
      Count = 4;
   }
   else if (Number > 99)
   {
      cout << "������Ϊ��λ��" << endl;
      Count = 3;
   }
   else if (Number > 9)
   {
      cout << "������Ϊ��λ��" << endl;
      Count = 2;
   }
   else
   {
      cout << "������Ϊһλ��" << endl;
      Count = 1;
   }
   Devide(Number, Count);
}
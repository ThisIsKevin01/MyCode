#include <iostream>
using namespace std;
int main()
{
    int num = 0, nums[5] = {0}, devidenums[5] = {1, 10, 100, 1000, 10000};
    cout << "����5λ����:";
    cin >> num;
    for (int i = 4; i >= 0; i--)
    {
        nums[i] = num / devidenums[i];
        num -= nums[i] * devidenums[i];
    }
    cout << "��λΪ:" << nums[0] << endl;
    cout << "ʮλΪ:" << nums[1] << endl;
    cout << "��λΪ:" << nums[2] << endl;
    cout << "ǧλΪ:" << nums[3] << endl;
    cout << "��λΪ:" << nums[4] << endl;
    cout << "�������:" << nums[0] << "  " << nums[1] << "  " << nums[2] << "  " << nums[3] << "  " << nums[4] << endl;
} 
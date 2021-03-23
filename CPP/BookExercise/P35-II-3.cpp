#include <iostream>
using namespace std;
int main()
{
    int num = 0, nums[5] = {0}, devidenums[5] = {1, 10, 100, 1000, 10000};
    cout << "输入5位数字:";
    cin >> num;
    for (int i = 4; i >= 0; i--)
    {
        nums[i] = num / devidenums[i];
        num -= nums[i] * devidenums[i];
    }
    cout << "个位为:" << nums[0] << endl;
    cout << "十位为:" << nums[1] << endl;
    cout << "百位为:" << nums[2] << endl;
    cout << "千位为:" << nums[3] << endl;
    cout << "万位为:" << nums[4] << endl;
    cout << "逆序输出:" << nums[0] << "  " << nums[1] << "  " << nums[2] << "  " << nums[3] << "  " << nums[4] << endl;
} 
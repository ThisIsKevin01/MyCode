#include <iostream>
using namespace std;
void Bobble_sort(int arr[], int &sz)
{
    for (int i = sz; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 65, 234, 543, 77};
    int sz = sizeof(arr) / sizeof(int);
    cout << sz << endl;
    Bobble_sort(arr, sz);
    cout << sz << endl;
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
}
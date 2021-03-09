#include <stdio.h>

int Reverse(int x)
{
    int res = 0;
    while (x != 0)
    {
        int tmp = x % 10;
        if (res > 214748364 || (res == 214748364 && tmp > 7))
        {
            return 0;
        }
        if (res < -214748364 || (res == -214748364 && tmp < -8))
        {
            return 0;
        }
        res = res * 10 + tmp;
        x /= 10;
    }
    return res;
}

int main()
{
    int x = 0;
    scanf("%d", &x);
    int res = Reverse(x);
    printf("%d\n", res);
    return 0;
}
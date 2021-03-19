#include <stdio.h>
//写代码告诉我们机器的字节序是什么
int check_sys(void)
{
    int a = 1;
    char *p = (char *)&a;
    if (*p == 1)
        return 1;
    else
        return 0;
}

int check_sys2(void)
{
    int a = 1;
    return *(char *)&a;
}

int main()
{
    int ret = check_sys();
    if (ret == 1)
    {
        printf("小端\n");
    }
    else
    {
        printf("大段\n");
    }
    return 0;
}
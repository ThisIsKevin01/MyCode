#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    int i;
    for (i = 0; i < 1000; i++)
    {
        a[i] = -1 - i;
    }
    printf("%d\n", strlen(a));
    return 0;
}

// 1) i��ȡֵ: -1, -2, -3, ...... -128, 127, 126, ...... 1, 0, ......
// 2) strlen()��ȡ��\0ֹͣ����, ����-1 ~ 1
// 3) ���:255
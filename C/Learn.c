#include <stdio.h>
/* void print(int *p, int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d\n", *(p + i));
    }
} */

// int Add(int x, int y)
// {
//     return x + y;
// }

// int Sub(int x, int y)
// {
//     return x - y;
// }

// int Mul(int x, int y)
// {
//     return x * y;
// }

// int Div(int x, int y)
// {
//     return x / y;
// }

// int main()
// {
//     int (*parr[4])(int, int) = {Add, Sub, Mul, Div};
//     for (int i = 0; i <= 4; i++)
//     {
//         printf("%d\n", parr[i](20, 10));
//     }
//     return 0;
// }

// char *my_strcpy(char *dest, const char *src);
//����һ����������������Ϊchar*�������������ͷֱ�Ϊchar*,����char*��

// char *(*pmy)(char *, const char *) = my_strcpy;
//����һ��ָ������ָ�룬ָ��ĺ�������Ϊchar*��ָ��ĺ����Ĳ�������Ϊchar*������char*��ָ��ĺ�������Ϊmy_strcpy��

// char (*pmyarr[1])(char *, const char *) = {&my_strcpy};
//����һ��ָ������ָ�����飬���麬��һ��Ԫ�ء�


int (*pf)(int, int);//����ָ��
int (*pfArr[4])(int, int);//pfArr��һ�����飬����ŵ��Ǻ����ĵ�ַ
int (*(*ppfArr)[4])(int, int) = &pfArr;
//ppfArr��һ������ָ�룬ָ��ָ��һ�����飬����������4��Ԫ�أ�Ԫ���Ǻ����ĵ�ַ
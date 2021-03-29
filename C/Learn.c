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
//创建一个函数，返回类型为char*，两个参数类型分别为char*,常量char*。

// char *(*pmy)(char *, const char *) = my_strcpy;
//创建一个指向函数的指针，指向的函数类型为char*，指向的函数的参数类型为char*，常量char*，指向的函数名字为my_strcpy。

// char (*pmyarr[1])(char *, const char *) = {&my_strcpy};
//创建一个指向函数的指针数组，数组含有一个元素。


int (*pf)(int, int);//函数指针
int (*pfArr[4])(int, int);//pfArr是一个数组，里面放的是函数的地址
int (*(*ppfArr)[4])(int, int) = &pfArr;
//ppfArr是一个数组指针，指针指向一个数组，数组里面有4个元素，元素是函数的地址
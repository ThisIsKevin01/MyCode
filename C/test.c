#include<stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    printf("%p\n", p);
    int *p2 = &p;
    printf("%p", p2);
    return 0;
}
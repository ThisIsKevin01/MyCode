#include <stdio.h>

char Test(char *ch)
{
    int a = sizeof(ch) / sizeof(ch[0]);
    printf("%d", a);
}

int main()
{

    Test("HelloWorld");
    return 0;
}
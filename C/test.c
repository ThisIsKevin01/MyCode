#include <stdio.h>
int test(char *x)
{
    printf("%s\n", x);
}

int main()
{
    char ch[] = "Hello";
    test(ch);
    return 0;
}
#include <stdio.h>
int main()
{
    char arr1[] = "abcdef";
    char arr2[] = "abcdef";
    if (arr1 == arr2)
        printf("Yes");
    else
        printf("No");
    return 0;
}
#include <stdio.h>
int isPalindrome(int x)
{
    if (x < 0)
        return 0;
    int reverse = 0;
    int x_copy = x;
    while(x)
    {
        reverse *= 10;
        reverse += x % 10;
        x /= 10;
    }
    if (reverse == x_copy)
        return 1;
    else
        return 0;
}

int main()
{
    int x = 0;
    printf("Input a number:");
    scanf("%d", &x);
    int y = 0;
    y = isPalindrome(x);
    if (y == 0)
        printf("It is not Palindrome");
    else if (y == 1)
        printf("It is Palindrome");
    return 0;        
}
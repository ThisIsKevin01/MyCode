#include <stdio.h>
#include <string.h>
int romanToInt(char *roman)
{
    int length = strlen(roman);
    int num[length];
    int count = 0;
    char c, biggest;
    for (int i = 0; i < length; i++)
    {
        switch(roman[i])
        {
        case 'I':
            num[i] = 1;
            break;
        case 'V':
            num[i] = 5;
            break;
        case 'X':
            num[i] = 10;
            break;
        case 'L':
            num[i] = 50;
            break;
        case 'C':
            num[i] = 100;
            break;
        case 'D':
            num[i] = 500;
            break;
        case 'M':
            num[i] = 1000;
            break;
        }
    }
    printf("%d\n", num[0]);
    return 0;
}

int main()
{
    char roman[] = "VI";
    int num = romanToInt(roman);
    return 0;
}
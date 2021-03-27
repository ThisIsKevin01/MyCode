#include <stdio.h>
void print1(int arr[3][5], int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void print2(int (*p)[5], int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", *(*(p + i) + j));
            //p + i指向某一行; *(p + i)拿到那一行,再加j指向具体某个元素,*解引用拿出具体元素
        } //arr[i] <==> *(arr + i) <==> *(p + i) <==> p[i]
        printf("\n");
    }
}
int main()
{
    int arr[3][5] = {{1, 2, 3, 4, 5},
                     {2, 3, 4, 5, 6},
                     {3, 4, 5, 6, 7}};
    print1(arr, 3, 5);
}
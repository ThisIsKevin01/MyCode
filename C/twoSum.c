#include <stdio.h>
int *twoSum(int *sums, int sumsSize, int target, int *returnSize)
{
    for (int i = 0; i <= sumsSize - 1; i++)
    {
        for (int j = 1; j <= sumsSize; j++)
        {
            if (sums[i] + sums[j] == target)
            {
                returnSize[0] = i;
                returnSize[1] = j;
            }
        }
    }
}

int main()
{
    int sums[] = {2, 11, 7, 15, 4, 66};
    int sumsSizs = sizeof(sums) / sizeof(sums[0]);
    int target = 70;
    int returnSize[2];
    twoSum(sums, sumsSizs, target, returnSize);
    printf("%d %d\n", returnSize[0], returnSize[1]);
    return 0;
}
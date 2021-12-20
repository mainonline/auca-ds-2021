#include <stdio.h>
#define N 5
#define M 3

void printArray(int *beg, int *end)
{
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", p[i]);
    // }

    while (beg != end)
    {
        printf("%d ", *beg++);
    }
    printf("\n");
}

int main(void)
{
    int arrN[N], arrM[M];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", arrN + i);
    }

    for (int i = 0; i < M; i++)
    {
        scanf("%d", arrM + i);
    }

    printArray(arrN, arrN + N);
    printArray(arrM, arrM + M);
}
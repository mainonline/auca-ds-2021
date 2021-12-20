#include <stdio.h>
#define N 10

int main(void)
{
    int a[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d ", &a[i]);
    }

    printf("Values of array:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    int sum1 = 0;
    for (int i = 0; i < N; i++)
    {
        sum1 += a[i];
    }

    int sum2 = 0;
    for (int *p = a; p != a + N; ++p)
    {
        sum2 += *p;
    }

    printf("sum1: %d\n", sum1);
    printf("sum2: %d\n", sum2);
}
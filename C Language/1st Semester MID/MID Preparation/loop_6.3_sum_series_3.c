#include <stdio.h>

int main()
{
    int i, n;
    float sum = 0;
    printf("Write a number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("Sum is %.4f", sum);
    return 0;
}
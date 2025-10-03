#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    printf("Write a number\n");
    scanf("%d", &n);
    for (i = 5; i <= n; i = i + 3)
    {
        sum += i;
    }
    printf("Sum is %d", sum);
    return 0;
}
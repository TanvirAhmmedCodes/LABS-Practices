#include <stdio.h>

int main()
{
    int i, n, even_sum = 0, odd_sum = 0;
    printf("Write a number\n");
    scanf("%d", &n);
    printf("Even numbers:\n");
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            even_sum += i;
        }
    }
    printf("Sum of even numbers %d\n", even_sum);
    printf("Odd numbers:\n");
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
            odd_sum += i;
        }
    }

    printf("Sum of odd numbers %d\n", odd_sum);
    return 0;
}
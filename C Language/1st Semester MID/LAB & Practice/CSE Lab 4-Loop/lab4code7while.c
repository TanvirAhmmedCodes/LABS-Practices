/*
factorial in while */
#include <stdio.h>
int main()
{
    int i, n, fact = 1;
    printf("Write a number:\n");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        fact = fact * i;
        i++;
    }
    printf("Factorial is %d\n", fact);
    return 0;
}
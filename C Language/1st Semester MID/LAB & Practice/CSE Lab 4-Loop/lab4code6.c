/*
1^2+2^2+3^3+......=?
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, sum = 0;
    printf("Write a number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + pow(i, 2);
    }
    printf("The total number is %d\n", sum);
    return 0;
}
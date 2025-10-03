/*
1^2+2^2+3^3+......=?
in while
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, sum = 0;
    printf("What is the number:\n");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        sum = sum + pow(i, 2);
        i++;
    }
    printf("%d", sum);
    return 0;
}
#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter e number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + pow(i, 2);
    }
    printf("Thhe total sum is %d\n", sum);
    return 0;
}
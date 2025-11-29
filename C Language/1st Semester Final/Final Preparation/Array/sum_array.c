// 1. C program to find sum of array elements//
#include <stdio.h>
int main()
{
    int a[100], n, i, sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Sum of array = %d\n", sum);
    return 0;
}

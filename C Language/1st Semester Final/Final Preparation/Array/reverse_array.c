// 5. C program to find reverse of array//
#include <stdio.h>
int main()
{
    int a[100], n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Reversed array: ");
    for (i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);
    return 0;
}
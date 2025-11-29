// 5. C Program to Find Maximum & Minimum Between Two Numbers Using Pointer//
#include <stdio.h>
int main()
{
    int a, b;
    int *p1 = &a;
    int *p2 = &b;
    printf("Enter two numbers: ");
    scanf("%d %d", p1, p2);
    if (*p1 > *p2)
        printf("Maximum = %d\nMinimum = %d\n", *p1, *p2);
    else
        printf("Maximum = %d\nMinimum = %d\n", *p2, *p1);
    return 0;
}
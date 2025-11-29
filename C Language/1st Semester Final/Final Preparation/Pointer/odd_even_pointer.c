// 4. C Program to Find Odd & Even Numbers Using Pointer//
#include <stdio.h>
int main()
{
    int n;
    int *p = &n;
    printf("Enter a number: ");
    scanf("%d", p);
    if (*p % 2 == 0)
        printf("%d is Even\n", *p);
    else
        printf("%d is Odd\n", *p);
    return 0;
}
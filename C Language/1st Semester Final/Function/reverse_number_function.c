#include <stdio.h>
void inverse_number(int num)
{
    for (int i = num; i >= 1; i--)
    {
        printf("%d", i);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    inverse_number(n);
    return 0;
}
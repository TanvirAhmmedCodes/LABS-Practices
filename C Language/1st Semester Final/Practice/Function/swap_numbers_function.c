#include <stdio.h>
void swap_number(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After Swap a=%d, b= %d", a, b);
}
int main()
{
    int n1, n2;
    printf("Enter 2 numbers");
    scanf("%d%d", &n1, &n2);
    printf("Before swap a=%d, b= %d", n1, n2);
    swap_number(n1, n2);
    return 0;
}
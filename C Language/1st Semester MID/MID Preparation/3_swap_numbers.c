#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Write 2 numbers:\n");
    scanf("%d%d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("Swapped numbres are a=%d & b=%d", a, b);
    return 0;
}
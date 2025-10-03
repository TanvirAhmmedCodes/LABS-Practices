#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Write 3 numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a >= b && a >= c)
    {
        printf("a =%d is the greatest\n", a);
    }
   
    else if(b >= a && b >= c)
        {
            printf("b= %d is is the greatest\n", b);
        }
    else
    {
        printf("c=%d is the greatest\n", c);
    }
    return 0;
}
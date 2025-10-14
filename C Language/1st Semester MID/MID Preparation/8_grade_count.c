#include <stdio.h>

int main()
{
    int g;
    printf("Write the number you got-\n");
    scanf("%d", &g);
    if (g >= 80)
        printf("Grade A+");
    else if (g >= 70)
        printf("Grade A");
    else if (g >= 60)
        printf("Grade A-");
    else if (g >= 50)
        printf("Grade B");
    else if (g >= 40)
        printf("Grade C");
    else
        printf("Grade F\n");

    return 0;
}
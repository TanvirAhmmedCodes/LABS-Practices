#include <stdio.h>

int main()
{
    int y;
    printf("Write the year\n");
    scanf("%d", &y);
    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
        printf("It's a Leap year!\n");
    else
        printf("It's Not a Leap year sadly\n");
    return 0;
}
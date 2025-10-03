#include <stdio.h>
int main()
{
    int day;
    printf("Enter number 1-7\n");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thursday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    case 7:
        printf("Saturday\n");
        break;
    default:
        printf("Invalid input, Enter number beteen 1-7 \n");
    }
    return 0;
}
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character\n");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("It's an uppercase alphabet\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("It's a lowercase alphabet\n");
    else if (ch >= '0' && ch <= '9')
        printf("It's a digit\n");
    else
        printf("Special Charracter\n");
    return 0;
}
// 2. C program to concatenate and compare two strings//
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    gets(a);
    gets(b);

    printf("Concatenation: %s\n", strcat(a, b));

    if (strcmp(a, b) == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
    return 0;
}

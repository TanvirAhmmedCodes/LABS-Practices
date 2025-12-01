/*5. C program to reverse a string. Also check whether a string is
palindrome or not*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[200], rev[200];
    gets(s);

    int len = strlen(s);
    for (int i = 0; i < len; i++)
        rev[i] = s[len - 1 - i];
    rev[len] = '\0';

    printf("Reverse: %s\n", rev);

    if (strcmp(s, rev) == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
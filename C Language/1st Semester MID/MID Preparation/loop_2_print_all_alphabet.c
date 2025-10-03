#include <stdio.h>

int main(){
    char ch;
    printf("The Uppercase are:\n");
    ch= 'A';
    while ( ch<='Z')
    {    
    printf("%c\n", ch);
    ch++;
    }
    printf("The Lowercase are:\n");
    ch= 'a';
    while (ch<='z')
    {
        printf("%c\n", ch);
        ch++;
    }
    return 0;
}
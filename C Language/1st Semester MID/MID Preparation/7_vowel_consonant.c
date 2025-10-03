#include <stdio.h>

int main(){
    char ch;
    printf("Write an Alphabet:\n");
    scanf("%c", &ch);
    if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    printf("It's a vowel\n");
    else
    printf("It's a consonant\n");
    return 0;
}
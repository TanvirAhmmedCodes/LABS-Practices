//1. C program to copy one string to another string//
#include <stdio.h>
#include <string.h>
int main(){
    char s1[100], s2[100];
    gets(s1);
    strcpy(s2, s1);
    printf("Copied: %s", s2);
    return 0;
}
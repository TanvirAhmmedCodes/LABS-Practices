/*
reverse numbers-
10
9
8
7
6
5
4
3
2
1
*/
#include <stdio.h>

int main(){
    int i,n;
    printf("Write a number\n");
    scanf("%d", &n);
    for(i=n; i>=1; i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
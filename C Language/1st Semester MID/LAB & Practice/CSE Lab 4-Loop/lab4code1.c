/*
numbers-
1
2
3
4
5
6
7
8
9
10
*/
#include <stdio.h>

int main(){
    int i, n;
    printf("Write a number\n");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
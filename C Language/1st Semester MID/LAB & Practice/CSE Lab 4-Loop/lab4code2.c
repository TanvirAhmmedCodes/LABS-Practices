/*
Odd Numbers-
1
3
5
7
9

*/

#include <stdio.h>

int main(){
    int i,n;
    printf("Write a number\n");
    scanf("%d", &n);
    for ( i = 1; i <=n; i=i+2)
    {
        
            printf("%d\n",i);
        
        
    }
    
    return 0;
}
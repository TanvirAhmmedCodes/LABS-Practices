/*
sum of odd numbers
*/
#include <stdio.h>

int main(){
    int i,n, sum=0;
    printf("Write a number\n");
    scanf("%d", &n);
    for(i=1; i<=n; i=i+2)
    {
        sum+=i;
        
    }
    printf("The total number is %d\n", sum);
    return 0;
}
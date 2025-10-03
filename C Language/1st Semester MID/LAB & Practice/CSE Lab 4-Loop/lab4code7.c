/*
factorial
*/
#include<stdio.h>
int main(){
    int i,n;
    long long fact=1;
    printf("Write a number:\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        fact= fact*i;
    }
    printf("%lld\n", fact);
    return 0;
}
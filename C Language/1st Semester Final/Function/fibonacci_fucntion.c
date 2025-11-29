#include <stdio.h>
int fib(int n){
    if (n<=1)
    {
        return n;
    }
    int a=0, b=1, c;
    for ( int i = 2; i <= n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
int main(){
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if (a<0)
    {
        printf("No fibonacci for negative numbers");
    }
    else
    {
        int fibo_result= fib(a);
        printf("The fibonacci of %d is %d", a, fibo_result);
    }
    return 0;
}
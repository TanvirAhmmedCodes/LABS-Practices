#include <stdio.h>
long long fact(int n){
    long long result=1;
    {
        for ( int i = 2; i <= n; i++)
        {
            result*=i;
        }
    }   
    return result;
}
int main(){
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if (a<0)
    {
        printf("No factorial for negative numbers");
    }
    else
    {
        long long fact_result= fact(a);
        printf("The factorial of %d is %lld", a, fact_result);
    }
    return 0;
}
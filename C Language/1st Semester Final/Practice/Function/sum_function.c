#include <stdio.h>
int sum (int a, int b);
int main(){
    int n1,n2,result;
    printf("Enter 2 numbers:\n");
    scanf("%d%d", &n1,&n2);
    result = sum(n1,n2);
    printf("The sum of %d & %d is %d",n1,n2, result);
    return 0;
}
int sum (int a, int b)
{
    return a+b;
}
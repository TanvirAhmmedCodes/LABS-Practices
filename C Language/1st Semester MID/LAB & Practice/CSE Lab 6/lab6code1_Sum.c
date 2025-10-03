#include <stdio.h>
int sum( int a, int b) //function description
{
    return a+b;  // main work
}
int main(){
    int a, b;
    printf("Write 2 numbers\n");
    scanf("%d%d", &a, &b);
    printf("Sum of %d and %d  is %d\n", a ,b , sum(a, b) );
    return 0;
}
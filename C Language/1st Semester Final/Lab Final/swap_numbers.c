#include <stdio.h>
void swap_numbers(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=a;
    printf("After swapping a= %d & b= %d", a,b);
}
int main (){
    int n1,n2;
    printf("Enter 2 numbers\n");
    scanf("%d%d", &n1, &n2);
    printf("The numbers were a=%d & b= %d\n", n1,n2);
    swap_numbers(n1,n2);
    return 0;
}
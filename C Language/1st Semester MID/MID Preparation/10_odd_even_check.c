#include <stdio.h>

int main(){
    int num;
    printf("Write to check the Number\n");
    scanf("%d", &num);
    if (num%2==0)
    {
        printf("It's an even number!\n");
    }
    else
    {
        printf("It's an odd number!\n");
    }
    return 0;
}
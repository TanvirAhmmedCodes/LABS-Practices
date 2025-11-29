#include <stdio.h>
void numbers(int num){
    for ( int i = 1; i <= num; i++)
    {
        printf("%d\n", i);
    }
    printf("\n");
}
int main(){
    int n;
    printf("Entter a number\n");
    scanf("%d", &n);
    numbers(n);
    return 0;
}
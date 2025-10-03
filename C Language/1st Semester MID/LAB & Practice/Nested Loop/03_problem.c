#include <stdio.h>

int main(){
    char i, a, b;
    scanf("%c %c", &a, &b);
    for(i=b; i>=a; i--)
    {
        printf("%c\n", i);
    }
    return 0;
}
#include <stdio.h>

int main(){
    int i, b;
    scanf("%d", &b);
    for(i=1; i<=b; i=i+2)
    {
        printf("%d\n", i);
    }
    return 0;
}
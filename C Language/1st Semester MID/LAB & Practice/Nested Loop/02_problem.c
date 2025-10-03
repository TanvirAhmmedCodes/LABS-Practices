#include <stdio.h>

int main(){
    int i, a,b;
    scanf("%d%d", &a, &b);
    i=b;
    while(i>=a)
    {
       
        printf("%d\n", i);
        i--;
    }
    return 0;
}
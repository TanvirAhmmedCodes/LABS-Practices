#include <stdio.h>

int main(){
    int i, j,r,c;
    scanf("%d%d", &r, &c);
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=i; j++){
        printf(" ");
        }
        for(j=1;j<=r-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
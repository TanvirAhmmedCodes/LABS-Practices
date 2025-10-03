#include <stdio.h>

int main(){
    int i, j, r,c;
    scanf("%d%d", &r, &c);
    for(i=1; i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==r||j==1||i==j)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
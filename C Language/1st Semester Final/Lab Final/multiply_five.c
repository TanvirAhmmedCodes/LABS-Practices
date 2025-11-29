#include <stdio.h>
int main(){
    int r,c, i,j;
    printf("Enter row & coloumn number\n");
    scanf("%d%d", &r, &c);
    int a[r][c];
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("After multiplyed by 5\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("  %d", a[i][j]*5);
        }
        printf("\n");
    }
    return 0;
}
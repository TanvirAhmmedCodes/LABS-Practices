#include <stdio.h>
int main()
{
    int i, j, r, c;
    scanf("%d%d", &r, &c);
    int a[r][c];
    int b[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            b[i][j]=a[i][j];
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
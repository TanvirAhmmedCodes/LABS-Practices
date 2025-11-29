#include <stdio.h>
int main()
{
    int i, j, m, n, sum = 0;
    scanf("%d%d", &m, &n);
    int a[m][n];
    int b[m][n];
    int c[m][n];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Sum of the coloum of matrix-\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum += a[j][i];
        }
        printf("%d ", sum);
        sum = 0;
    }
    return 0;
}
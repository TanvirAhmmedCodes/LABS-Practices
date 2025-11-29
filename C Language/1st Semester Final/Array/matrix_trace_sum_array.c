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
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
                sum += a[i][j];
        }
    }
    printf("%d ", sum);
    return 0;
}
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
    int mx = 0, index;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
        if (sum > mx)
        {
            mx = sum;
            index = i;
        }
        sum = 0;
    }
    printf("The maximum number is%d\n row number is %d ", mx, index + 1);
    return 0;
}
#include <stdio.h>

int main()
{
    int r, c, i, j, flag = 1;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c];
    printf("Enter values for Matrix A:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter values for Matrix B:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] != b[i][j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            break;
    }

    if (flag)
        printf("Matrices are equal\n");
    else
        printf("Matrices are not equal\n");

    return 0;
}
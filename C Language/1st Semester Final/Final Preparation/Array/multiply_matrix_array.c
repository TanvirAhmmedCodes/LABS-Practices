// 2A (Multiply matrix by 2)//
#include <stdio.h>
int main()
{
    int a[10][10], r, c, i, j;
    printf("Enter rows & columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    printf("\nMatrix 2A:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d ", 2 * a[i][j]); // Use 3* if 3A, 4* if 4A
        printf("\n");
    }
    return 0;
}
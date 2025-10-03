#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Row & Column Number =\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i +1; j++)  // just n - i + 1 hoilei inverse
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
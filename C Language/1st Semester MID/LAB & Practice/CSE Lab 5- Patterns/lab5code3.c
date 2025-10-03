/*

* * * * * 
* *   * * 
*   *   * 
* *   * * 
* * * * *

*/
#include <stdio.h>

int main()
{
    int i, j, row, coloumn;
    printf("Write 2 numbers\n");
    scanf("%d%d", &row, &coloumn);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= coloumn; j++)
        {
            if (i == 1 || i == row || j == 1 || j == coloumn || i == j || j == coloumn - i + 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
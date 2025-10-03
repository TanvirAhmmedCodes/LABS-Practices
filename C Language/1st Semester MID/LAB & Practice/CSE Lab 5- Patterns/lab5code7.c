/*

* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * *

*/
#include <stdio.h>

int main()
{
    int i, j, row, coloumn;
    printf("Write 2 number\n");
    scanf("%d%d", &row, &coloumn);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= coloumn; j++)

        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}

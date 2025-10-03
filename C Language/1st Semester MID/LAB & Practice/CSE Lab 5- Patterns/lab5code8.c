/*
    
*    
**   
***  
**** 
*****
****
***
**
*

*/
#include<stdio.h>

int main()
{
    int i, j, row, column=1;
    printf("Enter row Numbers\n");
    scanf("%d",&row);
    for(i=1;i<row*2;i++)
    {
        for(j=1; j<=column; j++)
        {
            printf("*");
        }

        if(i < row)
        {
            column++;
        }
        else
        {
            column--;
        }
        printf("\n");
    }

    return 0;
}
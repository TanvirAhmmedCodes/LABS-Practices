/*

1 2 3 
4 5 6 
7 8 9 

*/
#include <stdio.h>

int main(){
    int row, coloumn, i,j, num=1;
    printf("Write 2 Numbers:\n");
    scanf("%d%d", &row, &coloumn);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=coloumn;j++){
        printf("%d ", num);
        num++;
    }
    printf("\n");
    }
    
    return 0;
}
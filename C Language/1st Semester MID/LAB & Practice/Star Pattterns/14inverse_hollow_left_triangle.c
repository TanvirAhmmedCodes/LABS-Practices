#include <stdio.h>

int main(){
    int i, j,N;
    scanf("%d", &N);
    for(i=N; i>=1; i--)
    {
        for(j=1; j<=N-i; j++){
        printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if (i==N|| j==1|| i==j)
            printf("*");
            else 
            printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}
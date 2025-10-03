#include <stdio.h>
#include <math.h>
int main(){
    int i,j, sum=0;
    scanf("%d%d", &i, &j);
    i=1;
    do
    {
        sum=sum+pow(i,2);
        i++;
    } while(i<=j);
    
            printf("%d", sum);
    
    return 0;
}
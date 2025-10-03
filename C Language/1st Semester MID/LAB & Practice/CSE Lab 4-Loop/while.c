#include <stdio.h>
#include <math.h>
int main(){
    int i,j, sum=0;
    scanf("%d%d", &i, &j);
    i=1;
    while(i<=j)
    {
        sum=sum+pow(i,2);
        i++;
    }
        printf("%d", sum);
    return 0;
}
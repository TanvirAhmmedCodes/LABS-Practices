#include <stdio.h>
int main(){
    int n,i;
printf("Enter a number\n");
scanf("%d", &n);
int a[n], b[n];
for ( i = 0; i < n; i++)
{
    scanf("%d", &a[i]);
}
for ( i = 0; i < n; i++)

   b[i]=a[i];

for ( i = 0; i < n; i++)
{
    printf("%d ", b[i]);
}
return 0;
}
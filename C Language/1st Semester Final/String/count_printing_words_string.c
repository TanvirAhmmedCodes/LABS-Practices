#include <stdio.h>
#include <string.h>
int main(){
    int n,i, count=0;
    scanf("%d", &n);
    char ch[n];
    fgets(ch, sizeof(ch), stdin);
    for ( i = 0; i<strlen(ch); i++)
    {
        if (ch[i]==' ')
        {
            count++;
        }
    }
        printf("%d", count);

    return 0;
}

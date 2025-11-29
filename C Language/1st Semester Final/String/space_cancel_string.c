#include <stdio.h>
#include <string.h>
int main(){
    int n,i;
    scanf("%d", &n);
    char ch[n];
    fgets(ch, sizeof(ch), stdin);
    for ( i = 0; ch[i]!='\0'; i++)
    {
        if (ch[i]==' ')
        {
            continue;
        }
        printf("%c", ch[i]);
    }
    return 0;
}

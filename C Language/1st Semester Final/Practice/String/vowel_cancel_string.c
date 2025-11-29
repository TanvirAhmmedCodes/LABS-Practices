#include <stdio.h>
#include <string.h>
int main(){
    int n,i;
    scanf("%d", &n);
    char ch[n];
    fgets(ch, sizeof(ch), stdin);
    for ( i = 0; ch[i]!='\0'; i++)
    {
        if (ch[i]=='a'|| ch[i]=='e'|| ch[i]=='i'|| ch[i]=='o'|| ch[i]=='u'||ch[i]=='A'|| ch[i]=='E'|| ch[i]=='I'|| ch[i]=='O'|| ch[i]=='U')
        {
            continue;
        }
        printf("%c", ch[i]);
    }
    return 0;
}

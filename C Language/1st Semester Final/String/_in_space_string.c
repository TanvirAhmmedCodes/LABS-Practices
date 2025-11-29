#include <stdio.h>
int main() {
    char s[200];
    fgets(s,200,stdin);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==' ') printf("_");
        else printf("%c",s[i]);
    }
    return 0;
}
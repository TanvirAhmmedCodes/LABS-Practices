#include <stdio.h>
#include <string.h>
int main(){
    char s[100], r[100];
    fgets(s,100,stdin);
    s[strcspn(s,"\n")]=0;
    strcpy(r,s);
    strrev(r);
    if (strcmp(s,r)==0)
    {
        printf("Palidrome");
    }
    else
    {
        printf("Not Palidrome");
    }
    return 0;
}
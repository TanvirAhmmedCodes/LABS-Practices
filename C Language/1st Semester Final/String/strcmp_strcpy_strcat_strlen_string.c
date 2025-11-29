#include <stdio.h>
#include <string.h>
int main(){
    char a[100], b[100], c[200];
    fgets(a,100,stdin);
    fgets(b,100,stdin);
    a[strcspn(a,"\n")]=0;
    b[strcspn(b,"\n")]=0;
    printf("Length of A: %d\n", strlen(a));
    printf("Length of B: %d\n", strlen(b));
    int cmp = strcmp(a,b);
    if(cmp==0) printf("Strings are equal\n");
    else printf("Strings are not equal\n");
    strcpy(c,a);
    strcat(c,b);
    printf("After Concatenation: %s\n",c);
    return 0;
}
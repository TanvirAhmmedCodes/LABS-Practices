#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d", &n);
    char ch[n];
    fgets(ch, sizeof(ch), stdin);
    printf("%s", ch);
    return 0;
}

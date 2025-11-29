#include <stdio.h>
#include <string.h>
int main(){
    char s[200];
    int i, numbers=0, characters=0, special=0;
    fgets(s,200,stdin);
    s[strcspn(s,"\n")]=0;
    for ( i = 0; s[i] != '\0'; i++)
    {
        if (s[i]>='0' && s[i]<='9')
        {
            numbers++;
        }
        else if ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            characters++;
        }
        else
        {
            special++;
        }
    }
    printf("Digits: %d\n", numbers);
    printf("Characters: %d\n", characters);
    printf("Special Characters: %d\n", special);
    return 0;
}
/*3. C program to convert lowercase string to uppercase. And also
uppercase to lowercase.*/
#include <stdio.h>
#include <ctype.h>

int main(){
    char s[200];
    gets(s);

    for(int i=0; s[i]!=0; i++){
        if(islower(s[i])) s[i] = toupper(s[i]);
        else if(isupper(s[i])) s[i] = tolower(s[i]);
    }

    printf("Converted: %s", s);
}
/*4. C program to find total number of alphabets, vowel, consonant, digits
or special characters in a string*/
#include <stdio.h>
#include <ctype.h>

int main(){
    char s[200];
    gets(s);

    int alpha=0, vowel=0, consonant=0, digit=0, special=0;

    for(int i=0; s[i]!=0; i++){
        if(isalpha(s[i])){
            alpha++;
            if(strchr("aeiouAEIOU", s[i]))
                vowel++;
            else
                consonant++;
        }
        else if(isdigit(s[i])) digit++;
        else special++;
    }

    printf("Alphabets=%d\nVowel=%d\nConsonant=%d\nDigits=%d\nSpecial=%d",
           alpha, vowel, consonant, digit, special);
}
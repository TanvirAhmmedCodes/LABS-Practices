/*4. C program to find total number of alphabets, vowel, consonant, digits
or special characters in a string*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[200];
    gets(s);

    int alpha = 0, vowel = 0, consonant = 0, digit = 0, special = 0;

    for (int i = 0; s[i] != 0; i++)
    {
        if (isalpha(s[i]))
        {
            alpha++;
            if (strchr("aeiouAEIOU", s[i]))
                vowel++;
            else
                consonant++;
        }
        else if (isdigit(s[i]))
            digit++;
        else
            special++;
    }

    printf("Alphabets=%d\nVowel=%d\nConsonant=%d\nDigits=%d\nSpecial=%d",
           alpha, vowel, consonant, digit, special);
    return 0;
}
/*
Without String Function
#include <stdio.h>

int main() {
    char s[200];
    int alpha=0, vowel=0, consonant=0, digit=0, special=0;

    gets(s);

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) {
            alpha++;
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                vowel++;
            else
                consonant++;
        }
        else if (ch>='0' && ch<='9')
            digit++;
        else
            special++;
    }

    printf("Alphabet = %d\n", alpha);
    printf("Vowel = %d\n", vowel);
    printf("Consonant = %d\n", consonant);
    printf("Digit = %d\n", digit);
    printf("Special = %d\n", special);

    return 0;
}
    */

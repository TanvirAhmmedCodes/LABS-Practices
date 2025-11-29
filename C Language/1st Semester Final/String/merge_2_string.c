#include <stdio.h>
#include <string.h>
int main() {
    char a[100], b[100], c[200];
    int i = 0, j = 0;

    printf("Enter first string (a): ");
    scanf("%s", a);

    printf("Enter second string (b): ");
    scanf("%s", b);

    while (a[i] != '\0') {
        c[i] = a[i];
        i++;
    }

    c[i++] = ' ';

    while (b[j] != '\0') {
        c[i] = b[j];
        i++;
        j++;
    }

    c[i] = '\0';

    printf("Merged string (c): %s\n", c);
    return 0;
}

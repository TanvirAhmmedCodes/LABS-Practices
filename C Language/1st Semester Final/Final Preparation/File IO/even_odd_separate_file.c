// 4(i). Even & Odd numbers separated into two files//
#include <stdio.h>
int main()
{
    FILE *num, *odd, *even;
    int n;
    num = fopen("number.txt", "r");
    odd = fopen("odd.txt", "w");
    even = fopen("even.txt", "w");
    if (num == NULL)
    {
        printf("number.txt not found!\n");
        return 1;
    }
    while (fscanf(num, "%d", &n) != EOF)
    {
        if (n % 2 == 0)
            fprintf(even, "%d\n", n);
        else
            fprintf(odd, "%d\n", n);
    }
    fclose(num);
    fclose(odd);
    fclose(even);
    printf("Odd and even numbers written successfully.\n");
    return 0;
}
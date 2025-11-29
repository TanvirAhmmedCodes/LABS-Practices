// 4(ii). Sum first 5 numbers from number.txt//
#include <stdio.h>
int main()
{
    FILE *num, *sumfile;
    int n, sum = 0, count = 0;
    num = fopen("number.txt", "r");
    sumfile = fopen("sum_file.txt", "w");
    if (num == NULL)
    {
        printf("number.txt not found!\n");
        return 1;
    }
    while (fscanf(num, "%d", &n) != EOF && count < 5)
    {
        sum += n;
        count++;
    }
    printf("Sum of first 5 numbers = %d\n", sum);
    fprintf(sumfile, "Sum = %d\n", sum);
    fclose(num);
    fclose(sumfile);
    return 0;
}
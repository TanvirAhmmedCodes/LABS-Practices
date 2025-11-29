/*
Given a file of integers, write a C program that separates odd numbers and computes the sum of even numbers. Save odd numbers to one file and the sum to another.
4(i)+4(ii)
*/
#include <stdio.h>
int main() {
    FILE *numFile, *oddFile, *sumFile;
    int num, sum = 0;
    numFile = fopen("numbers.txt", "r");
    oddFile = fopen("odd.txt", "w");
    sumFile = fopen("sum.txt", "w");
    if (!numFile || !oddFile || !sumFile)
        return 1;
    while (fscanf(numFile, "%d", &num) != EOF) {
        if (num % 2 == 0)
            sum += num;
        else
            fprintf(oddFile, "%d\n", num);
    }
    fprintf(sumFile, "%d\n", sum);
    fclose(numFile);
    fclose(oddFile);
    fclose(sumFile);
    return 0;
}
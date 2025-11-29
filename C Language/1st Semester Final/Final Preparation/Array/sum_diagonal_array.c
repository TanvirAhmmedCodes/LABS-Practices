//8. C program to find sum of main diagonal elements of a matrix//
#include <stdio.h>
int main() {
    int a[10][10], n, i, j, sum = 0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < n; i++)
        sum += a[i][i];

    printf("Sum of main diagonal = %d\n", sum);
    return 0;
}

/*Write a C program to perform addition, subtraction, and multiplication of two matrices. Also compute the scalar multiplication 2A of the first matrix A
7+2A mixed
*/
#include <stdio.h>
int main() {
    int a[10][10], b[10][10];
    int sum[10][10], sub[10][10], mul[10][10];
    int r, c, i, j, k;

    scanf("%d %d", &r, &c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d", &a[i][j]);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d", &b[i][j]);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            sum[i][j] = a[i][j] + b[i][j];

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            sub[i][j] = a[i][j] - b[i][j];

    for(i=0;i<r;i++)
        for(j=0;j<c;j++){
            mul[i][j] = 0;
            for(k=0;k<c;k++)
                mul[i][j] += a[i][k] * b[k][j];
        }

    printf("\nAddition:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    printf("\nSubtraction:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%d ", sub[i][j]);
        printf("\n");
    }

    printf("\nMultiplication:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%d ", mul[i][j]);
        printf("\n");
    }

    printf("\n2A (Scalar Multiplication):\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%d ", 2*a[i][j]);
        printf("\n");
    }

    return 0;
}
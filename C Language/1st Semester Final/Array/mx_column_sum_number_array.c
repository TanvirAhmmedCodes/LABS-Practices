#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter matrix size: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter matrix values:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }    }
    int max = 0, col = 0;
    for(j=0; j<n; j++) {
        int sum = 0;
        for(i=0; i<n; i++) {
            sum += a[i][j];
        }
        if(j == 0 || sum > max) {
            max = sum;
            col = j;
        }
    }
    printf("Maximum column sum: %d\n", max);
    printf("Column number: %d\n", col + 1);
    return 0;
}
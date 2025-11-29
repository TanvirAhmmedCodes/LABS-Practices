#include <stdio.h>

int main() {
    int r, c, i, j, count = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    printf("Enter matrix values:\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j] == 0) count++;
        }
    }

    if(count > (r * c) / 2)
        printf("Matrix is sparse\n");
    else
        printf("Matrix is not sparse\n");

    return 0;
}
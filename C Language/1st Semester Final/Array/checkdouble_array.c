#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Duplicate numbers: ");
    for (i = 0; i < n; i++) {
        int count = 1;
        if (a[i] != -1) { 
            for (j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    count++;
                    a[j] = -1;
                }
            }
            if (count > 1) {
                printf("%d ", a[i]);
            }
        }
    }
    return 0;
}

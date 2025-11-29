#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = INT_MAX, second_min = INT_MAX;

    for(i = 0; i < n; i++) {
        if(arr[i] < min) {
            second_min = min;
            min = arr[i];
        } else if(arr[i] < second_min && arr[i] != min) {
            second_min = arr[i];
        }
    }

    if(second_min == INT_MAX) {
        printf("No second minimum found (all elements may be equal).\n");
    } else {
        printf("Minimum element: %d\n", min);
        printf("Second minimum element: %d\n", second_min);
    }

    return 0;
}
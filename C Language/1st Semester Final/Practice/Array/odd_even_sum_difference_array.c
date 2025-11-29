#include <stdio.h>

int main()
{
    int n, i;
    int odd_sum = 0, even_sum = 0;
    printf("How many numbers will you enter? ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even_sum += arr[i];
        }
        else
        {
            odd_sum += arr[i];
        }
    }
    int difference = odd_sum - even_sum;
    printf("Sum of odd numbers: %d\n", odd_sum);
    printf("Sum of even numbers: %d\n", even_sum);
    printf("Difference (odd - even): %d\n", difference);
    return 0;
}
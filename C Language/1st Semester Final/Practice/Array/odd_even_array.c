#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number:\n");
    scanf("%d", &n);
    int a[n], odd[n], even[n];
    int j = 0, k = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            even[j++] = a[i];
        }
        else
        {
            odd[k++] = a[i];
        }
    }
    printf("Even numbers:\n");
    for (i = 0; i < j; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\nOdd numbers:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", odd[i]);
    }
    return 0;
}

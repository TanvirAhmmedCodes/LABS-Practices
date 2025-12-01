// 6. C program to search an element in array (Linear Search)//
#include <stdio.h>
int main()
{
    int a[100], n, i, key;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("Element found at index %d\n", i);
            return 0;
        }
    }
    printf("Element not found.\n");
    return 0;
}

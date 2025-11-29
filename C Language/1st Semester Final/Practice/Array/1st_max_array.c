#include <stdio.h>
int main()
{
    int i, n, mx;
    printf("Enter a number\n");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    mx = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > mx)
        {
            mx = a[i];
        }
    }
    printf("%d", mx);
    return 0;
}
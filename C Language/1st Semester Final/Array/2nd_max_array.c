#include <stdio.h>
int main()
{
    int i, n, mx, mx2;
    printf("Enter a number\n");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    mx = a[0], mx2 = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > mx)
        {
            mx = a[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (mx2 < a[i] && a[i] != mx)
        {
            mx2 = a[i];
        }
    }
    printf("%d", mx2);
    return 0;
}
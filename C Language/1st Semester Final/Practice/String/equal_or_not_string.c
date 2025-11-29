#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j, count, index = 1;
    scanf("%d", &n);
    char ch[n], bh[n];
    fgets(ch, sizeof(ch), stdin);
    fgets(bh, sizeof(bh), stdin);
    for (i = 0; i < strlen(bh); i++)
    {
        if (bh[i] != ch[i])
        {
            index = 0;
            break;
        }
    }
    if (index == 1)
    {
        printf("Both are equal");
    }
    else
    {
        printf("Both arre not equal");
    }
    return 0;
}

// 3. C program to append data into a file//
#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("myfile.txt", "a");

    if (fp == NULL)
    {
        printf("File not found!\n");
        return 1;
    }
    fprintf(fp, "This line is appended to the file.\n");
    fclose(fp);
    printf("Data appended successfully.\n");
    return 0;
}
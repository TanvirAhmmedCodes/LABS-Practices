// 1. C program to create a file and write data into file//
#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("myfile.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "This is a test file.\n");
    fprintf(fp, "Writing some data into the file.\n");

    fclose(fp);

    printf("Data written successfully.\n");

    return 0;
}

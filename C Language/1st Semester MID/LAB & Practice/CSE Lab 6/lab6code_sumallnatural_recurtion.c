#include <stdio.h>
int SumOfAllNumbers(int start, int end);
int main()
{
    int start, end, sum;
    printf("Write the lower limit\n");
    scanf("%d", &start);
    printf("Write the upper limit\n");
    scanf("%d", &end);
    sum = SumOfAllNumbers(start , end);
    printf("Sum of Natural Numbers from %d to %d = %d", start, end, sum);
    return 0;
}
int SumOfAllNumbers(int start, int end)
{
    if(start==end)
    return start;
    else
    return start+ SumOfAllNumbers(start+1, end);
}
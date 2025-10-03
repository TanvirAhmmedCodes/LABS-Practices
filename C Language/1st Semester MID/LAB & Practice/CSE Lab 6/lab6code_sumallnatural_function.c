#include <stdio.h>
int SumOfAllNumbers (int start, int end); //function description
int main (){
    int start, end, sum=0;
    printf("Write starting & ending number\n");
    scanf("%d%d", &start, &end);
    sum = SumOfAllNumbers (start,  end); //function recall kortre hobe
    printf ("The Sum of %d to %d is %d\n", start, end, sum);
    return 0;
}
int SumOfAllNumbers (int start, int end) // ; hobe na
{
    int sum, i;      // int diye abar dite hobe jeigula niche lagbe
    for (i=start; i<=end; i++)
    {
        sum+=i;
    }
    return sum;

}
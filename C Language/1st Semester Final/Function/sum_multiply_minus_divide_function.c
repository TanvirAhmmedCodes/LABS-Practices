#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int multiply(int a, int b)
{
    return a * b;
}
int minus(int a, int b)
{
    return a - b;
}
float divide(int a, int b)
{
    return (float)a / b;
}
int main()
{
    int n1, n2, sum_result, multiply_result, minus_result;
    float divide_result;
    printf("Enter 2 numbers:\n");
    scanf("%d%d", &n1, &n2);
    sum_result = sum(n1, n2);
    multiply_result = multiply(n1, n2);
    minus_result = minus(n1, n2);
    if (n2 != 0)
    {
        divide_result = divide(n1, n2);
    }
    else
    {
        divide_result = 0.0;
    }
    printf("\n--- Calculation Results ---\n");
    printf("Sum: %d + %d = %d\n", n1, n2, sum_result);
    printf("Multiplication: %d * %d = %d\n", n1, n2, multiply_result);
    printf("Subtraction: %d - %d = %d\n", n1, n2, minus_result);

    if (n2 != 0)
    {
        printf("Division: %d / %d = %.2f\n", n1, n2, divide_result); // দশমিকের জন্য .2f
    }
    else
    {
        printf("Division: Cannot divide by zero!\n");
    }
    return 0;
}
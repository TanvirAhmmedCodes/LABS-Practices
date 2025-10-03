#include <stdio.h>
#define PI 3.1416
int main()
{
    float r, d, c, a;
    printf("What is Radius?\n");
    scanf("%f", &r);
    d = 2 * r;
    c = 2 * PI * r;
    a = PI * r * r;
    printf("The Circle's diameter is = %.2f , circumference is = %.2f , area is = %.2f\n", d, c, a);
    return 0;
}
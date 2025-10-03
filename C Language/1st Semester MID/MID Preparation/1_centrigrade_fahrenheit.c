#include <stdio.h>

int main(){
    float c, f;
    printf("Write in centigrade\n");
    scanf("%f", &c);
    f= (c*9/5)+32;
    printf("Temperrature in Fahrenheit is = %.2f ",f);
    return 0;
}
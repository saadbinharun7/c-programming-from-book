//Write a C program to enter temperature in Celsius and convert it to Fahrenheit.
#include <stdio.h>

int main(){

    float c, f;
    printf("Input temperature in Celsius: ");
    scanf("%f", &c);

    f = (c * 9/5) + 32;

    printf("Temperature in fahrenheit is: %.2f", f);

    return 0;
}

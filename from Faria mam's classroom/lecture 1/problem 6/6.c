#include <stdio.h>
#include <math.h>

int main(){

    float a;
    printf("Enter a number: ");
    scanf("%f", &a);

    float b = sqrt(a);
    printf("Square root of %.2f is: %.2f", a, b);


    return 0;
}

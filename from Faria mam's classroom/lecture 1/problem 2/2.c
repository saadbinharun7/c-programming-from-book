//Write a program to calculate the volume of a sphere taking radius as input from user
#include <stdio.h>

int main(){

    float r, v;
    printf("Input radius: ");
    scanf("%f", &r);

    v = (4.0/3.0) * (3.1416) * (r*r*r);

    printf("Volume of the sphere is : %.2f", v);

    return 0;
}

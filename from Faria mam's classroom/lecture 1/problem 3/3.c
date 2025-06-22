//Write a C program to find the third angle of a triangle taking two angles as input from user.
#include <stdio.h>

int main(){

    int angle1, angle2, angle3;
    printf("Input one angle of the triangle: ");
    scanf("%d", &angle1);

    printf("Input another angle of the triangle: ");
    scanf("%d", &angle2);

    angle3 = 180 - (angle1 + angle2);

    printf("Angle three is: %d", angle3);

    return 0;
}

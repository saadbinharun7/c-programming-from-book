//Write a C program to perform addition, subtraction, multiplication and division of two numbers.
#include <stdio.h>

int main(){

    float num1, num2;
    printf("input 2 numbers: ");
    scanf("%f", &num1);
    scanf("%f", &num2);

    float sum = num1 + num2;
    printf("Addition of two numbers is: %.2f\n", sum);

    float sub = num1 - num2;
    printf("Subtraction of two numbers is: %.2f\n", sub);

    float mul = num1 * num2;
    printf("Multipliaction of two numbers is: %.2f\n", mul);

    float divi = num1 / num2;
    printf("Division of two numbers is: %.2f\n", divi);


    return 0;
}

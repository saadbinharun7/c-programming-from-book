//Write a C program to enter marks of 5 subjects of a student and calculate total, average and percentage.
#include <stdio.h>

int main(){

    float sub1, sub2, sub3, sub4, sub5;
    printf("Input Subject One's Number: ");
    scanf("%f", &sub1);
    printf("Input Subject Two's Number: ");
    scanf("%f", &sub2);
    printf("Input Subject Three's Number: ");
    scanf("%f", &sub3);
    printf("Input Subject Four's Number: ");
    scanf("%f", &sub4);
    printf("Input Subject Five's Number: ");
    scanf("%f", &sub5);

    float total = sub1 + sub2 + sub3 + sub4 + sub5;
    printf("Total number is: %.2f\n", total);

    float average = total / 5;
    printf("Average Number is: %.2f\n", average);

    float percentage = (total / 500) * 100;
    printf("Percentage is: %.2f%%\n", percentage);


    return 0;
}

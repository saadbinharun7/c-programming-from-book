/*Write a C program to accept a grade and declare an equivalent description.
grade-------description
E--------------Excellent
V--------------Very Good
G--------------Good
A--------------Average
F--------------Fail*/

#include <stdio.h>

int main(){

    char a;
    printf("Input a grade(E/V/G/A/F): ");
    scanf("%c", &a);

    if(a == 'E'){
        printf("Excellent");
    }
    else if(a == 'V'){
        printf("Very Good");
    }
    else if(a == 'G'){
        printf("Good");
    }
    else if(a == 'A'){
        printf("Average");
    }
    else if(a == 'F'){
        printf("Fail");
    }


    return 0;
}

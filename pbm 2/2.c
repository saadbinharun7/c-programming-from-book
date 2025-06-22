//if 4x+5y=14 , 5x+6y=17 then find value of x & y.

#include <stdio.h>

int main(){

    float a1,a2,b1,b2,c1,c2,x,y;

    a1 = 4;
    b1 = 5;
    c1 = 14;
    a2 = 5;
    b2 = 6;
    c2 = 17;

    x = (b2*c1 - b1*c2)/(a1*b2 - a2*b1);
    y = (a1*c2 - a2*c1)/(a1*b2 - a2*b1);


    printf("x = %.2f\n", x);
    printf("y = %.2f", y);


    return 0;
}

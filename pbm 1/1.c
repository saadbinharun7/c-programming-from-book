//1) if x + y = 15, x - y = 5 then find value of x & y.

#include <stdio.h>

int main(){

    float a1,a2,b1,b2,c1,c2,x,y;

    a1 = 1;
    b1 = 1;
    a2 = 1;
    b2 = -1;
    c1 = 15;
    c2 = 5;

    x = (b2*c1 - b1*c2)/(a1*b2 - a2*b1);
    y = (a1*c2 - a2*c1)/(a1*b2 - a2*b1);

    printf("x= %.2f\n", x);
    printf("y = %.2f", y);



    return 0;
}

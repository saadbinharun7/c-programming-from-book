//if 4x+5y=14 , 5x+6y=17 then find value of x & y.

#include <stdio.h>

int main(){

    float a1,a2,b1,b2,c1,c2,x,y,d;

    printf("a1 = ");
    scanf("%f", &a1);
    printf("b1 = ");
    scanf("%f", &b1);
    printf("a2 = ");
    scanf("%f", &a2);
    printf("b2 = ");
    scanf("%f", &b2);
    printf("c1 = ");
    scanf("%f", &c1);
    printf("c2 = ");
    scanf("%f", &c2);

    d = a1*b2 - a2*b1;

    if ( (int) d == 0){
        printf("values are not correct");
    }
    else {
        x = (b2 * c1 - b1 * c2) / d;
        y = (a1 * c2 - a2 * c1) / d;

        printf("x = %.2f", x);
        printf("y = %.2f", y);
    }




    return 0;
}


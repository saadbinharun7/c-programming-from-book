#include <stdio.h>

double find_area(double pi, double r);
int main(){

    double pi = 3.1416;
    double r;

    scanf("%lf", &r);

    double area = find_area(pi, r);

    printf("%lf", area);

    return 0;
}
double find_area(double pi, double r){

    double area = pi * r * r;
    return area;
}

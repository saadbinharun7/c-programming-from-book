#include <stdio.h>

double add(double a, double b);
int main() {

    double a, b, c;

    a = 2.5;
    b = 2.5;
    c = add(a, b);

    printf("%lf", c);

    return 0;
}
double add(double a, double b) {

    double sum = a + b;
    return sum;
}

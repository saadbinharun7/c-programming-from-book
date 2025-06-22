//1 + 2 + 3 + .... + 998 + 999 + 1000 এই ধারার সমস্টি কত?

#include <stdio.h>

int main(){

    int n, sum;

    printf("last number of the flow : ");
    scanf("%d", &n);

    sum = (n*(n + 1))/2;

    printf("summation is %d\n", sum);



    return 0;
}

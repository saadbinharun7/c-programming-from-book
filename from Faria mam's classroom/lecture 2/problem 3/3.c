#include <stdio.h>

int main(){

    int a, b, c;
    printf("Input 3 numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a>b && a>c){
        printf("%d is largest", a);
    }
    else if(b>a && b>c){
        printf("%d is largest", b);
    }
    else{
        printf("%d is largest", c);
    }

    return 0;
}

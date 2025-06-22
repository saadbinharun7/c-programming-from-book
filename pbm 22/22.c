#include <stdio.h>

double find_avr(int arr[], int n);
int main(){

    int arr[] = {12, 45, 11, 64, 87, 39, 44, 85, 75, 69};
    int n = 10;

    double avr = find_avr(arr, n);
    printf("%lf", avr);

    return 0;
}
double find_avr(int arr[], int n){

    int sum = 0;
    for(int i = 0; i < 10; i++){
        sum = sum + arr[i];
    }
    double avr = (double) sum / (double) n;

    return avr;
}

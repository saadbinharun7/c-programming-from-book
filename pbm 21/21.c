#include <stdio.h>

int find_min(int arr[], int n);
int main(){
    int arr[] = {12, 45, 11, 64, 87, 39, 44, 85, 75, 69};
    int n = 10;

    int min = find_min(arr, n);

    printf("%d", min);

    return 0;
}
int find_min(int arr[], int n){
    int min = 100, i;

    for(i = 0; i < 10; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}

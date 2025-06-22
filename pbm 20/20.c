#include <stdio.h>

int find_max(int arr[], int n);
int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 10;
    int max = find_max(arr, n);

    printf("%d", max);
    return 0;
}
int find_max(int arr[], int n){

    int max = 0;

    for(int i = 0; i < 10; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
}

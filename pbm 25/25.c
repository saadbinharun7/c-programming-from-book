#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int low = 0, high = 1000;
    for(int i = 0; i < 1000; i++){
        int mid = (low + high) / 2;
        if(mid == num){
            printf("number is %d", mid);
            break;
        }
        else if(num > mid){
            low = mid;
        }
        else if(num < mid){
            high = mid;
        }
    }

    return 0;
}


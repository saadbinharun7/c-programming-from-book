//বাইনারি সার্চ এর জন্য আলাদা ফাংশন, প্রোটোটাইপঃ int b_search (int ara, int low, int high, int key)

#include <stdio.h>

int b_search(int ara[], int low, int high, int key);
int main(){


    int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int low = 0;
    int high = 15;
    int key = 9;

    int ans = b_search(ara, low, high, key);

    if(ans == -1){
        printf("%d is not in the array\n", ans);
    }
    else{
        printf("%d", ans);
    }

    return 0;
}
int b_search(int ara[], int low, int high, int key){

    int ans, mid;
    for(int i = 0; low <= high; i++){
        mid = (low + high) / 2;

        if (mid == key){
            break;
        }
        if (mid < key){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    if(low > high){
        ans = mid;
    }
    else{
        ans = mid;
    }

    return ans;
}

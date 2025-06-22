//একটি অ্যারেতে ১০ টি উপাদান আছে, সেগুলো বিপরীত ক্রোমে রাখতে হবে। যেমন ১ম উপাদান = ১০ম উপাদান, ২য় উপাদান = ৯ম উপাদান।

#include <stdio.h>

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int ara[10];
    int j = 9;

    for(int i = 0; i < 10; i++){
         ara[j] = arr[i];
         j--;
    }
    for(int i = 0; i < 10; i++){
        arr[i] = ara[i];
    }
    for(int i = 0; i < 10; i++){
        printf("%d\n", arr[i]);
    }


    return 0;
}

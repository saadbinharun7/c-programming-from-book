#include <stdio.h>

int main(){

    char arr[5], a;
    int is = 0;
    arr[0] = 'a';
    arr[1] = 'e';
    arr[2] = 'i';
    arr[3] = 'o';
    arr[4] = 'u';

    printf("Input an alphabet(lower case): ");
    scanf("%c", &a);

    for(int i = 0; i < 5; i++){
        if(a == arr[i]){
            is = 1;
            break;
        }
    }
    if(is){
        printf("its a vowel");
    }
    else{
        printf("its a consonant");
    }


    return 0;
}

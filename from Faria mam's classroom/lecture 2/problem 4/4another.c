#include <stdio.h>

int main(){

    char input;
    printf("input an alphabet(lower case): ");
    scanf("%c", &input);

    if(input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u'){
        printf("its a vowel");
    }
    else{
        printf("its a consonent");
    }

    return 0;
}

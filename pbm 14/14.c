//ইনপুট হবে ৩ পরিক্ষার নম্বর (১ম সাময়িক,২য় সায়িক, বার্ষিক)।
//১ম সাময়িক ও ২য় সাময়িক থেকে ২৫% ও বার্ষিক থেকে ৫০% নিয়ে চূড়ান্ত নম্বর।
//চূড়ান্ত নম্বর বের করার কোড কী? (সকলের জন্য)।

#include <stdio.h>

int main() {

    float total_marks[10];

    int ft_result[10] = {50,20,78,75,90,30,40,67,10,99};
    int st_result[10] = {50,45,77,89,65,21,32,98,21,99};
    int f_result[10] = {50,43,12,32,57,12,65,12,76,99};
    int num,student = 0;
    scanf("%d", &num);

    for(int i = 0; i < 10; i++){
        total_marks[i] = ft_result[i] / 4.0 + st_result[i] / 4.0 + f_result[i] / 2.0;
    }
    for(int j = 0; j < 10; j++){
        printf("%.0f\t", total_marks[j]);
    }
    for(int k = 0; k < 10; k++){
        if(total_marks[k] == num){
            student++;
        }
    }
    printf("\nthe number : %d , got by %d students", num, student);

    return 0;
}
